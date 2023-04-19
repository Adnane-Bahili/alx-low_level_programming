#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its opcodes
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	char *c_0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	c_0 = (char *)main;

	for (j = 0; j < i; j++)
	{
		if (j == i - 1)
		{
			printf("%02hhx\n", c_0[j]);
			break;
		}
		printf("%02hhx ", c_0[j]);
	}
	return (0);
}
