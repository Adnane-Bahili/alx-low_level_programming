#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 *
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size && size > 0; i++)
	{
		for (j = 0; j <= size; j++)
		{
			if (j > 0)
			{
				_putchar('#');
			}
			else
			{
				_putchar('\n');
			}
		}
	}	
}
