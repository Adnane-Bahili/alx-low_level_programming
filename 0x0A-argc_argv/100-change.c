#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the minimum number of coins to make change for an amount of money
 * @argc: argument counter
 * @argv: arguments array pointer
 *
 * Return:	0 if success
 *		1 if mumber of arguments != 1
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("0\n");
		return (0);
	}
	while (j / 25)
	{
		j -= 25;
		i++;
	}
	while (j / 10)
	{
		j -= 10;
		i++;
	}
	while (j / 5)
	{
		j -= 5;
		i++;
	}
	while (j / 2)
	{
		j -= 2;
		i++;
	}
	i += j;
	printf("%d\n", i);
	return (0);
}
