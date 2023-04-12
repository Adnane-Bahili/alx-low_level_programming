#include <stdlib.h>
#include <stdio.h>
/**
 * **strtow - splits a string into words
 * @str: split string
 *
 * Return:	pointer to array of words,
 *		NULL if it fails, or (str ==NULL || str == "")
 */
char **strtow(char *str)
{
	char **c;
	int i, j, n, wc = 0, wl = 0, cw = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) != ' ')
			wc++;
		while (*(str + i) != ' ' && *(str + i))
			i++;
		if (!*(str + i))
			break;
	}
	if (wc == 0)
		return (NULL);
	c = malloc(sizeof(char *) * (wc + 1));
	if (c == NULL)
		return (NULL);
	for (i = 0, j = i; cw < wc; i++, wl = 0, j = i)
	{
		if (*(str + i) == ' ')
			continue;
		while (*(str + j) != ' ' && *(str + j++))
			wl++;
		c[cw] = malloc(sizeof(char) * wl + 1);
		if (!c[cw])
		{
			while (cw-- >= 0)
				free(c[cw]);
			free(c);
			return (NULL);
		}
		for (n = 0; i < j; i++, n++)
			c[cw][n] = *(str + i);
		c[cw++][n] = '\0';
	}
	c[wc] = NULL;
	return (c);
}
