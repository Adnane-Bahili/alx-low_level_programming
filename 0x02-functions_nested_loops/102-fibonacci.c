#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long int i  = 0;
	long int j  = 1;
	long int k;
	long int count = 1;

	while (count <= 50)
	{
		k =  j + i;
		count++;
		printf("%ld", k);

		if (count <= 50)
			printf(", ");
		i = j;
		j = k;
	}
	printf("\n");

	return (0);
}
