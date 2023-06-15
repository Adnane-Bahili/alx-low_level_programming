#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - crackme5 password generator, and printer
 * @argc: arguments count
 * @argv: arguments pointer
 *
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pass[7], *cdx;
	int l = strlen(argv[1]), i, temp;

	cdx = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	temp = (l ^ 59) & 63;
	pass[0] = cdx[temp];
	temp = 0;

	for (i = 0; i < l; i++)
		temp += argv[1][i];
	pass[1] = cdx[(temp ^ 79) & 63];

	temp = 1;

	for (i = 0; i < l; i++)
		temp *= argv[1][i];
	pass[2] = cdx[(temp ^ 85) & 63];

	temp = 0;

	for (i = 0; i < l; i++)
	{
		if (argv[1][i] > temp)
			temp = argv[1][i];
	}
	srand(temp ^ 14);
	pass[3] = cdx[rand() & 63];

	temp = 0;

	for (i = 0; i < l; i++)
		temp += (argv[1][i] * argv[1][i]);
	pass[4] = cdx[(temp ^ 239) & 63];
	for (i = 0; i < argv[1][0]; i++)
		temp = rand();
	pass[5] = cdx[(temp ^ 229) & 63];
	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}
