#include "search_algos.h"


int advanced_binary_depend(int *array, size_t lft, size_t rght, int value);


/**
 * advanced_binary -	search for value in array using advanced Binary search
 *			also prints the array being searched with each change
 * @array: array to search in pointer
 * @size: array element count
 * @value: what to search for
 *
 * Return: index where 'value' is located
 *   -1 when 'value' is not present, or array == NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_depend(array, 0, size - 1, value));
}
/**
 * advanced_binary_depend - searches for a value in array using Binary search
 *			also prints the array being searched with each change
 * @array: array to search in pointer
 * @lft: array's starting index
 * @rght: array's finishing index
 * @value: what to search for
 *
 * Return: index where 'value' is located
 *   -1 when 'value' is not present, or array == NULL
 */
int advanced_binary_depend(int *array, size_t lft, size_t rght, int value)
{
	size_t s;

	if (rght < lft)
		return (-1);
	printf("Searching in array: ");
	for (s = lft; s < rght; s++)
		printf("%d, ", array[s]);
	printf("%d\n", array[s]);

	s = lft + (rght - lft) / 2;

	if (array[s] == value && (s == lft || array[s - 1] != value))
		return (s);
	if (array[s] >= value)
		return (advanced_binary_depend(array, lft, s, value));
	return (advanced_binary_depend(array, s + 1, rght, value));
}
