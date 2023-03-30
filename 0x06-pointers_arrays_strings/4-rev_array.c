#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = j =  0;
	n -= 1;
	while (i <= n)
	{
		j = a[n];
		a[n--] = a[i];
		a[i++] = j;
	}
}
