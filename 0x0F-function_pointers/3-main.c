#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - computes an opeartion and prints the result
 * @argc: argument count
 * @argv: arguments array
 *
 * Return:	prints the result
 *		0 when successful
 *		exit code when not
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i1, i2;
	char *c_0;

	if (argc != 4)
	{	printf("Error\n");
		exit(98);
	}

	c_0 = argv[2];
	i1 = atoi(argv[1]);
	i2 = atoi(argv[3]);

	if (get_op_func(c_0) == NULL || c_0[1] != '\0')
	{	printf("Error\n");
		exit(99);
	}
	if ((*c_0 == '/' && i2 == 0) || (*c_0 == '%' && i2 == 0))
	{	printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(c_0)(i1, i2));
	return (0);
}
