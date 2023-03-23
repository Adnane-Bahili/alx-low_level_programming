#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * Retuen: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n && n > 0; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');

	}
}
