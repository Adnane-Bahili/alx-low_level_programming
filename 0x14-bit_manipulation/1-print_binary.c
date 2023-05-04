#include "main.h"
/**
 * print_binary - prints binary representation of number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int del;
	int chg;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (del = n, chg = 0; (del >>= 1) > 0; chg++)
		;
	for (; chg >= 0; chg--)
	{
		if ((n >> chg) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
