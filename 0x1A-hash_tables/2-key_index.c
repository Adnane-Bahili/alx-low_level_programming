#include "hash_tables.h"
/**
 * key_index -	returns the index at which a key/value pair should
 *		be stored in an array of the hash table
 * @key: wanted key
 * @size: size of the hash table array
 *
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
