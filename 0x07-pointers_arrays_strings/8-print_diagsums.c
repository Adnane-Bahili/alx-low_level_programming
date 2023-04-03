#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 * @a: matrix
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[(size + 1) * i];
		k += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", j, k);
}
