#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: array size
 *
 * Return:	 new hash table pointer
 *		NULL when error occurs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hat;
	unsigned long int h;

	hat = malloc(sizeof(hash_table_t));

	if (hat == NULL)
		return (NULL);
	hat->size = size;
	hat->array = malloc(sizeof(hash_node_t *) * size);
	if (hat->array == NULL)
		return (NULL);
	for (h = 0; h < size; h++)
		hat->array[h] = NULL;
	return (hat);
}
