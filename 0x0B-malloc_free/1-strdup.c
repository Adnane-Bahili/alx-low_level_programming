#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string to allocate memory for
 *
 * Return:	Pointer to string in memory
 *		NULL if str == NULL
 */
char *_strdup(char *str)
{
	int i;
	char *d;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		;
	d = malloc(i + 1);
	if (d == 0 || d == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		d[i] = *(str + i);
	}
	d[i] = *(str + i);
	return (d);
}
