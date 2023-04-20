#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to print between strings
 * @n: number of strings to pass to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;
	char *s;

	va_start(l, n);

	i = 0;

	while (i < n)
	{
		s = va_arg(l, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(l);
}
