#include <stdlib.h>
/**
 * *_realloc -reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: bytes of the allocated space for ptr
 * @new_size: bytes of the new memory block
 *
 * Return:	pointer to the reallocated memory
 *		NULL if the call is equivalent to free(ptr)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;
	unsigned int i, j;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		c = malloc(new_size);
		return (c);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	c = malloc(new_size);
	if (c == NULL)
		return (NULL);
	if (new_size > old_size)
		j = old_size;
	else
		j = new_size;
	for (i = 0; i < j; i++)
		c[i] = *((char *)ptr + i);
	free(ptr);
	return ((void *)c);
}
