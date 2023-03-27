#include "main.h"
/**
 * _puts - prints a string to the standard output
 * @str: string to print pointer
 *
 * Retuen: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
