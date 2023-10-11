#include "search_algos.h"
/**
 * interpolation_search - searches for a value using Interpolation search
 *			also prints a value when It's compared in the array
 * @array: array to search in pointer
 * @size: array element count
 * @value: what to search for
 *
 * Return:	first index where 'value' is located
 *		-1 when 'value' is not present, or array == NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t s, lft, rgt;

	if (array == NULL)
		return (-1);
	for (lft = 0, rgt = size - 1; rgt >= lft;)
	{
		s = lft + (((double)(rgt - lft) /
					(array[rgt] - array[lft])) * (value - array[lft]));
		if (s < size)
			printf("Value checked array[%ld] = [%d]\n", s, array[s]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", s);
			break;
		}
		if (array[s] == value)
			return (s);
		if (array[s] > value)
			rgt = s - 1;
		else
			lft = s + 1;
	}
	return (-1);
}
