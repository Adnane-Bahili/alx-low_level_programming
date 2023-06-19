#include "main.h"
/**
* _atoi - converts a string to an integer.
* @s: character string pointer
*
* Return: void
*/
int _atoi(char *s)
{
	int i;
	unsigned int j;
	char *c;

	c = s;
	j = 0;
	i = 1;
	while (*c != '\0' && (*c < '0' || *c > '9'))
	{
		if (*c == '-')
			i *= -1;
		c++;
	}
	if (*c != '\0')
	{
		do {
			j = j * 10 + (*c - '0');
			c++;
		} while (*c >= '0' && *c <= '9');
	}
	return (j * i);
}
