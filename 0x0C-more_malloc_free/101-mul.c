#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int is_number(char *s)
{
	for (int i = 0; s[i]; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
	}
	return (1);
}

int main(int ac, char *av[])
{
	int len1 = 0, len2 = 0, *result;
	char *s1, *s2;
	int digit1, digit2, carry;
	int checker = 0;

	if (ac != 3)
	{
		printf("Error");
		exit(98);
	}
	if (!(is_number(av[1]) && is_number(av[2])))
	{
		printf("Error");
		exit(98);
	}
	s1 = av[1];
	s2 = av[2];

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	result = malloc(sizeof(int) * (len1 + len2 + 1));
	for (int i = 0; i < len1 + len2 + 1; i++)
		result[i] = 0;

	for (int i = len1 - 1; i >= 0; i--)
	{
		digit1 = s1[i] - '0';
		carry = 0;
		for (int j = len2 - 1; j >= 0; j--)
		{
			digit2 = s2[j] - '0';
			carry += result[i + j + 1] + (digit1 * digit2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[i] = carry;
	}
	for (int i = 0; i < len1 + len2; i++)
	{
		if (result[i])
			checker = 1;
		if (checker)
			putchar(result[i] + 48);
	}
	if (checker == 0)
		putchar('0');
	putchar('\n');
	free(result);
	return (0);
}
