/**
 * _strstr - locates a substring
 * @haystack: source string
 * @needle: substring to find
 *
 * Return:	haystack, pointer to the beginning of the located substring
 *		NULL, if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;

		do {
			if (needle[i + 1] == '\0')
				return (haystack);
			i++;
		} while (needle[i] == haystack[i]);
		haystack++;
	}
	return ('\0');
}
