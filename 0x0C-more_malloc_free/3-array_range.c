#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: first values
 * @max: last values
 *
 * Return:	pointer to the newly created array
 *		NULL if it fails, or if min > max
 */
int *array_range(int min, int max)
{
	int *i, j;
	int k = max - min + 1;

	i = malloc(sizeof(int) * k);

	if (min > max)
		return (NULL);
	if (i == NULL)
		return (NULL);
	for (j = 0; j < k; j++)
		i[j] = min++;
	return (i);
}
