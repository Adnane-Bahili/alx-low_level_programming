#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        putchar only and no char variable
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
