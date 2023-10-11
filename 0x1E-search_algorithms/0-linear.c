#include "search_algos.h"
/**
  * linear_search -	searches for an 'int' value in an array using Linear search
  *			also prints a value when It's compared in the array
  * @array: array to search in pointer
  * @size: array element count
  * @value: what to search for
  *
  * Return:	first index where 'value' is located
  *		-1 when 'value' is not present, or array == NULL
  */
int linear_search(int *array, size_t size, int value)
{
	size_t s;

	if (array == NULL)
		return (-1);
	for (s = 0; s < size; s++)
	{
		printf("Value checked array[%ld] = [%d]\n", s, array[s]);
		if (array[s] == value)
			return (s);
	}
	return (-1);
}
