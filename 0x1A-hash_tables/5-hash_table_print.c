#include "hash_tables.h"
/**
 * hash_table_print -	prints the hash table
 *			key/value pairs get printed in the array/list order
 * @ht: hash table pointer
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int h;
	unsigned char sep = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (h = 0; h < ht->size; h++)
	{
		if (ht->array[h] != NULL)
		{
			if (sep == 1)
				printf(", ");
			node = ht->array[h];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			sep = 1;
		}
	}
	printf("}\n");
}
