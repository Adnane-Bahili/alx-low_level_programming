#include "main.h"
/**
 * more_numbers - prints 10 * the numbers, from 0 to 14, followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b <= 14 && b >= 10)
			{
				_putchar((b / 10) + '0');
			}
				_putchar((b % 10) + '0');
		}
	_putchar('\n');
	}
}
