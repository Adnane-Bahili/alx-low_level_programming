#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: initial sting
 * @s2: string to copy from
 * @n: how much to copy from s2
 *
 * Return:	pointer to newly allocated memory
 *		NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, k;

	j = k = 0;
	if (s1)
		for (; s1[j]; j++)
			;
	if (s2)
		for (; s2[k]; k++)
			;
	if (!(n >= k))
		k = n;
	str = malloc(sizeof(char) * (j + k) + 1);
	if (!str)
		return (NULL);
	for (i = 0; i < (j + k); i++)
	{
		if (i < j)
			str[i] = s1[i];
		else
			str[i] = s2[i - j];
	}
	str[i] = '\0';
	return (str);
}
