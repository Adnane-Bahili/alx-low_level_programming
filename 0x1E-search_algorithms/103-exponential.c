#include "search_algos.h"


int bin(int *array, size_t lft, size_t rght, int value);


/**
 * exponential_search - searches for value in an array using Exponential search
 *		also prints a value when It's compared in the array
 * @array: array to search pointer
 * @size: array element count
 * @value: what to search for
 *
 * Return:	index where 'value' is located
 *		-1 when 'value' is not present, or array == NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t s = 0, rght;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (s = 1; s < size && array[s] <= value; s = s * 2)
			printf("Value checked array[%ld] = [%d]\n", s, array[s]);
	}
	rght = s < size ? s : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", s / 2, rght);
	return (bin(array, s / 2, rght, value));
}
/**
 * bin - searches for 'value' in a sorted array
 *		also prints the array being searched with each change
 * @array: array to search pointer
 * @lft: array's starting index
 * @rght: array's finishing index
 * @value: what to search for
 *
 * Return:	index where 'value' is located
 *		-1 when 'value' is not present, or array == NULL
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int bin(int *array, size_t lft, size_t rght, int value)
{
	size_t s;

	if (array == NULL)
		return (-1);
	while (rght >= lft)
	{
		printf("Searching in array: ");
		for (s = lft; s < rght; s++)
			printf("%d, ", array[s]);
		printf("%d\n", array[s]);

		s = lft + (rght - lft) / 2;

		if (array[s] == value)
			return (s);
		if (array[s] > value)
			rght = s - 1;
		else
			lft = s + 1;
	}
	return (-1);
}
