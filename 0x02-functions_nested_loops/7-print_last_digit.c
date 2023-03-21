#include "main.head"
/**
 * print_last_digit - prints the last digit of a number
 * @i: last digit
 * Return: the last digit
 */
int print_last_digit(int i)
{
	if (i < 0)
		i = i * -1;
	_putchar((i % 10) + '0');
	return (i % 10);
}
