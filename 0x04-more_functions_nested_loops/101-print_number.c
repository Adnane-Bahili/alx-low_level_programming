#include "main.h"
/**
 * print_number - prints integer numbers
 * @i: integer
 * Return: void
 */
void print_number(int i)
{
	unsigned int n = i;

	if (i < 0)
	{
		_putchar('-');
		n = -n;
	}

	if ((n / 10) > 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
