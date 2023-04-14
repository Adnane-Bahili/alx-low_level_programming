#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int is_digit(char *s);
void errors(void);
int _strl(char *s);

/**
 * main - multiplies two positive numbers
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *c1, *c2;
	int l1, l2, l, i, carry, d1, d2, *r, j = 0;

	c1 = argv[1], c2 = argv[2];
	if (argc != 3 || !is_digit(c1) || !is_digit(c2))
		errors();
	l1 = _strl(c1);
	l2 = _strl(c2);
	l = l1 + l2 + 1;
	r = malloc(sizeof(int) * l);
	if (!r)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		r[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = c1[l1] - '0';
		carry = 0;
		for (l2 = _strl(c2) - 1; l2 >= 0; l2--)
		{
			d2 = c2[l2] - '0';
			carry += r[l1 + l2 + 1] + (d1 * d2);
			r[l1 + l2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			r[l1 + l2 + 1] += carry;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (r[i])
			j = 1;
		if (j)
			_putchar(r[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
/**
 * is_digit - checks if a string is a digit
 * @s: string to evaluate
 *
 * Return:	0 if it's a digit
 *		1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strl - returns the string lgth
 * @s: string to evaluate
 *
 * Return: string lgth
 */
int _strl(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * errors - main error handling
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
