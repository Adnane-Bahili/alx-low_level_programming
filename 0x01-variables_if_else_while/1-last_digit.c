#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print last digit of number
 * Return: 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	else if (l == 0)
		printf("Last digit of %d is %d and is 0\n", n, l);
	else if (l < 6 && l != 0)
		printf("Last digit is %d is %d and is less thsn 6 snd not 0\n", n, l);
	return (0);
}
