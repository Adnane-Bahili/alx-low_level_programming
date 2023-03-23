#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *@n: integer
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n && n >= 1; i++)
		_putchar('_');
	_putchar('\n');
}
