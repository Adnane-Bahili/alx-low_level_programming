#include "main.h"
/**
 * leet - encodes a string into eleet
 * @s: string pointer
 *
 * Return: translates string to leetspeak
 */
char *leet(char *s)
{
	int i, j;
	char l[] = "aAeEoOtTlL";
	char ls[] = "43071";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
			if (s[i] == l[j])
				s[i] = ls[j / 2];
	}
	return (s);
}
