#include "main.h"
/**
 * main - prints _putchar, followed by a new line
 *
 * Description: Prints _putchar using a character array,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
