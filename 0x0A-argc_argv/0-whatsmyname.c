#include <stdio.h>
/**
 * main - prints program name
 *
 * @argc: argument counter
 * @argv: arguments array pointer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
