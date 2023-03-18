#include <stdio.h>
/**
 * main - Prints alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
