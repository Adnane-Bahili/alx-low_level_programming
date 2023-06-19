#include "main.h"
/**
 * _strncat- concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: how many bytes to use
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}
