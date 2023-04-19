/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: array size
 * @cmp:  pointer to a function that compares values
 *
 * Return:	index of the first element for which cmp does not return 0
 *		-1 if no element matches, or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	if (size > 0 && cmp && size && array)
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
