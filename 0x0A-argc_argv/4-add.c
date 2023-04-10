#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive numbers.
 *
 * @argc: argument counter
 * @argv: arguments array pointer
 *
 * Return:      0 if success
 *              1 if a number is not a digit only
 */
int main(int argc, char **argv)
{
	int i, j;
	int k = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			k += atoi(argv[i]);
		}
		printf("%d\n", k);
		return (0);
	}
	else
		printf("0\n");

	return (0);
}
