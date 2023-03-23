#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: \ is printed n times
 * Retuen: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 2; j <= i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
