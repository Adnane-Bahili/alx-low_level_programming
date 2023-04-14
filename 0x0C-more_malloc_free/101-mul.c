void *_calloc(unsigned int nmemb, unsigned int size)
char *_memset(char *s, char b, unsigned int n)
int _strlen(char *s)
int Numbers(char *c)
void multiply(char *a, char *b)


/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *a = argv[1];
	char *b = argv[2];

	if (argc != 3 || !Numbers(a) || !Numbers(b))
	{
		printf("Error\n");
		exit(98);
	}
	if (*a == 48 || *b == 48)
		printf("0\n");
	else
		multiply(b, a);
	return (0);
}

/**
 * multiply - multiplies 
 * @a: 1st
 * @b: 2nd
 */
void multiply(char *a, char *b)
{
	int i, l1, l2, total, adigit, bdigit, result = 0, t;
	int *p;

	l1 = _strlen(a);
	l2 = _strlen(b);
	t = l2;
	total = l1 + l2;
	p = _calloc(sizeof(int), (l1 + l2));
	for (l1--; l1 >= 0; l1--)
	{
		adigit = a[l1] - '0';
		result = 0;
		l2 = t;
		for (l2--; l2 >= 0; l2--)
		{
			bdigit = b[l2] - '0';
			result += p[l2 + l1 + 1] + (adigit * bdigit);
			p[l1 + l2 + 1] = result % 10;
			result /= 10;
		}
		if (result)
			p[l1 + l2 + 1] = result % 10;
	}
	while (*p == 0)
	{
		p++;
		total--;
	}
	for (i = 0; i < total; i++)
		printf("%i", p[i]);
	printf("\n");
}
/**
 * Numbers - determines
 * @c: input 
 * Return: 0 if false
 * 1 if true
 */
int Numbers(char *c)
{
	while (*c)
	{
		if (*c < '0' || *c > '9')
			return (0);
		c++;
	}
	return (1);
}

/**
 * _strlen - returns 
 * @s: s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * _memset - fills
 * @s: mem area
 * @b: const byte
 * @n: bytes of mem area
 * Return: pointer 
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;
	return (p);
}

/**
 * _calloc - allocates 
 * @nmemb: elements of pointer
 * @size: size 
 * Return: pointer 
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(size * nmemb);
	if (!p)
		return (NULL);
	_memset(p, 0, size * nmemb);
	return (p);
}
