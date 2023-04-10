#include "main.h"
/**
 * _strncpy - copies a string up to n
 * @dest: string copied pointer
 * @src: string to copy pointer
 * @n: how many bytes to copy
 *
 * Return: destination string pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i]	= src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
