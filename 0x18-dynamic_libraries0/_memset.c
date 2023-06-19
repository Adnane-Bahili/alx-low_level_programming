/**
 * *_memset - fills the memory with a constant byte
 * @s: memory area to be filled
 * @b: constant byte
 * @n: bytes of the memory area to fill
 *
 * Return: s, memory area pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
