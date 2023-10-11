#include "search_algos.h"
/**
  * binary_search -	searches for a value in an array using Binary search
  *			also prints the array being searched with each change
  * @array: array to search in pointer
  * @size: array element count
  * @value: what to search for
  *
  * Return:	index where 'value' is located
  *		-1 when 'value' is not present, or array == NULL
  */
int binary_search(int *array, size_t size, int value)
{
	size_t s, lft, rght;

	if (array == NULL)
		return (-1);
	for (lft = 0, rght = size - 1; rght >= lft;)
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
