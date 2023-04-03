/**
 * _strchr - locates a character in a string
 * @s: string to contain character
 * @c: character to search for
 *
 * Return:	c pointer
 *		NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	if (c == '\0')
		return ((s + i));
	return ('\0');
}
