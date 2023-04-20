#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: string to print between numbers
 * @n: number of integers to pass to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	
	unsigned int i;

	va_start(l, n);
	
	i = 0;
	
	while (i < n)
	{
		printf("%d", va_arg(l, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(l);
}
