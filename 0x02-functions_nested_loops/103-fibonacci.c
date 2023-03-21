#include "stdio.h"
/**
 * main - Sum of the even-valued terms of the Fibonacci sequence under 4 Mil
 *
 *
 * Return: 0
 */
int main(void)
{
	long int i, j, k, s;

	i = 0;
	j = 0;
	k = 1;
	s = 0;

	while (j < 4000000)
	{
		j = i + k;
		i = k;
		k = j;

		if (j % 2 == 0)
		{
			s += j;
		}

	}
	printf("%ld\n", s);

	return (0);
}
