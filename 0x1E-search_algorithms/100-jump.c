#include "search_algos.h"

/**
  * jump_search - searches for an 'int' value in an array using Jump search
  *		also prints a value when It's compared in the array
  * @array: array to search in pointer
  * @size: array element count
  * @value: what to search for
  *
  * Return:	first index where 'value' is located
  *		-1 when 'value' is not present, or array == NULL
  */
int jump_search(int *array, size_t size, int value)
{
	size_t s, jmp, stp;

	if (size == 0 || array == NULL)
		return (-1);

	stp = sqrt(size);

	for (s = jmp = 0; jmp < size && array[jmp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jmp, array[jmp]);
		s = jmp;
		jmp += stp;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", s, jmp);

	jmp = jmp < size - 1 ? jmp : size - 1;

	for (; s < jmp && array[s] < value; s++)
		printf("Value checked array[%ld] = [%d]\n", s, array[s]);
	printf("Value checked array[%ld] = [%d]\n", s, array[s]);
	return (array[s] == value ? (int)s : -1);
}
