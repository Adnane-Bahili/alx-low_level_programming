#include <stdio.h>
/**
 * main - Prints out the larget prime factor of 612852475143
 * Return:return 0 with success.
 */
int main(void)
{
	long i;
	long n = 612852475143;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			n /= i;
	}
	printf("%li\n", n);
	return (0);
}
