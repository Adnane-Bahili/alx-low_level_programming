#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements of array
 * @size: size of each element of array
 *
 * Return:	pointer to allocated memory
 *		NULL if it fails, or if (nmemb == 0 || size == 0)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		c[i] = 0;
	return ((void *)c);
}
