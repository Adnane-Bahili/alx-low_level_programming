#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table
 * @ht: A pointer to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *temp;
	unsigned long int h;

	for (h = 0; h < ht->size; h++)
	{
		if (ht->array[h] != NULL)
		{
			node = ht->array[h];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
