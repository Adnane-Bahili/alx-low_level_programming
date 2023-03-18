#include <stdio.h>
/**
 * main - Prints alphabets in lowercase, except q and e
 *
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
			putchar(a);
	}

	putchar('\n');

	return (0);
}

