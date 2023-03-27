#include "main.h"
/**
 * print_rev - prints a reverse string, followed by a new line
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
