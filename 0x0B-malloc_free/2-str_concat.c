#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: string to concatenate to s1
 *
 * Return:	pointer newly allocated space which contains s1, followed by s2
 *		and null terminated
 *		NULL if concatenation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *cs;
	int i, ci = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		j++;
	cs = malloc(sizeof(char) * j);
	if (cs == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		cs[ci++] = s1[i];
	for (i = 0; s2[i]; i++)
		cs[ci++] = s2[i];
	return (cs);
}
