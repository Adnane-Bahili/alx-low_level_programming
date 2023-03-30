#include <stdio.h>
#include "main.h"
/**
 * print_buffer - prints a buffer, formatted
 *
 * @b: buffer pointer
 * @size: number of bytes to buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j = 0, k = size;

	if (size % 10 != 0)
		k = ((size / 10) + 1) * 10;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < k; i++)
	{
		if (j++ % 10 == 0)
		{
			printf("%08x: ", i);
		}
		if (i < size)
			printf("%02x", *(b + i));
		else
			printf("  ");
		if (i % 2 != 0)
			printf(" ");
		if (j == 10)
		{
			for (j = i - 9; j <= i; j++)
			{
				if (*(b + j) > 31 && j < size)
					printf("%c", *(b + j));
				else if (j < size)
					printf(".");
			}
			printf("\n");
			j = 0;
		}
	}
}
