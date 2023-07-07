#include "hash_tables.h"


shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);


/**
 * shash_table_create - creates a sorted hash table
 * @size: new hash table size
 *
 * Return:	new hash table pointer
 *		NULL when an error occurs
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hat;
	unsigned long int h;

	hat = malloc(sizeof(shash_table_t));

	if (hat == NULL)
		return (NULL);

	hat->size = size;
	hat->array = malloc(sizeof(shash_node_t *) * size);

	if (hat->array == NULL)
		return (NULL);
	for (h = 0; h < size; h++)
		hat->array[h] = NULL;
	hat->shead = NULL;
	hat->stail = NULL;

	return (hat);
}
/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return:	1 when it succeeds
 *		0 when it fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *temp;
	char *cp_val;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cp_val = strdup(value);
	if (cp_val == NULL)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = cp_val;
			return (1);
		}
		temp = temp->snext;
	}

	new = malloc(sizeof(shash_node_t));

	if (new == NULL)
	{
		free(cp_val);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(cp_val);
		free(new);
		return (0);
	}
	new->value = cp_val;
	new->next = ht->array[ind];
	ht->array[ind] = new;
	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new->sprev = temp;
		new->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new;
		else
			temp->snext->sprev = new;
		temp->snext = new;
	}
	return (1);
}
/**
 * shash_table_get -	retrieves the value
 *			associated with a key in a sorted hash table
 * @ht: sorted hash table pointer
 * @key: wanted key
 *
 * Return:	value associated with the key in hash table
 *		NULL when the key cannot be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);

	if (ind >= ht->size)
		return (NULL);
	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;
	return ((node == NULL) ? NULL : node->value);
}
/**
 * shash_table_print - prints a sorted hash table in an order
 * @ht: sorted hash table pointer
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints a sorted hash table in the reverse order
 * @ht: sorted hash table pointer
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: sorted hash table pointer
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;
	node = ht->shead;
	while (node)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}
	free(head->array);
	free(head);
}
