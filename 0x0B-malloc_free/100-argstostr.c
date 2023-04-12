#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments of a program
 * @ac: arguments count
 * @av: arguments pointer
 *
 * Return:	pointer to new cing
 *		NULL if it fails, or if (ac == 0 || av == NULL)
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l = ac;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
	}
	s = malloc(l * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}
	s[l] = '\0';
	return (s);
}
