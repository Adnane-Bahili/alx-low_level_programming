/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes to return
 *
 * Return: j, number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int j = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				j++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}
