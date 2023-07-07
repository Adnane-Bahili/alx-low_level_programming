#include "hash_tables.h"
/**
 * hash_table_set - add or update an element in the hash table
 * @ht: hash table pointer
 * @key: key to add, cannot be an empty string
 * @value: value associated with the key
 *
 * Return:	1 when it succeeds
 *		0 when it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *cp_val;
	unsigned long int ind, h;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cp_val = strdup(value);
	if (cp_val == NULL)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);

	for (h = ind; ht->array[h]; h++)
	{
		if (strcmp(ht->array[h]->key, key) == 0)
		{
			free(ht->array[h]->value);
			ht->array[h]->value = cp_val;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
	{
		free(cp_val);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = cp_val;
	new->next = ht->array[ind];
	ht->array[ind] = new;
	return (1);
}
