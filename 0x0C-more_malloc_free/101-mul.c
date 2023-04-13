#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *_memset(char *s, char b, unsigned int n);
int _strlen(char *s);
void *_calloc(unsigned int nmemb, unsigned int size);
void multiply_nums(char *c, char *d);
int numbersonly(char *i);

/**
 * main - multiplies two positive numbers
 * @argc: arguments count
 * @argv: arguments vectors
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *c = argv[1];
	char *d = argv[2];

	if (argc != 3 || !numbersonly(c) || !numbersonly(d))
	{
		printf("Error\n");
		exit(98);
	}
	if (*c == 48 || *d == 48)
		printf("0\n");
	else
		multiply_nums(c, d);
	return (0);
}
/**
 * multiply_nums - multiplies two numbers, then displays the result
 * @c: num1
 * @d: num2
 */
void multiply_nums(char *c, char *d)
{
	int i, j, k, t, cd, dd;
	int n = 0, m;
	int *p;

	j = _strlen(c);
	k = _strlen(d);
	m = k;
	t = j + k;
	p = _calloc(sizeof(int), (j + k));
	for (j--; j >= 0; j--)
	{
		cd = c[j] - '0';
		n = 0;
		k = m;
		for (k--; k >= 0; k--)
		{
			dd = d[k] - '0';
			n += p[k + j + 1] + (cd * dd);
			p[j + k + 1] = n % 10;
			n /= 10;
		}
		if (n)
			p[j + k + 1] = n % 10;
	}
	while (*p == 0)
	{
		p++;
		t--;
	}
	for (i = 0; i < t; i++)
		printf("%i", p[i]);
	printf("\n");
}
/**
 * numbersonly - checks if a string only has numbers
 * @i: characters ASCII value
 * Return:	1 if the string consists of numbers only
 *		0 if it fails
 */
int numbersonly(char *i)
{
	while (*i)
	{
		if (*i < '0' || *i > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}
/**
 * _memset -  constant byte memory fill
 * @s: memory area
 * @b: constant byte
 * @n: bytes of memory area
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;
	return (p);
}
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements of array
 * @size: size of each element of array
 *
 * Return:	pointer to allocated memory
 *		NULL if it fails, or if (!nmemb || !size)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(size * nmemb);
	if (!p)
		return (NULL);
	_memset(p, 0, size * nmemb);
	return (p);
}
