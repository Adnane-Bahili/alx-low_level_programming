#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates chars array, and initializes it with a specific char
 * @size: input size
 * @c: character
 * Return:	pointer to the array
 *		NULL if size = 0, or if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(sizeof(char) * size);

	if (size == 0 || a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
