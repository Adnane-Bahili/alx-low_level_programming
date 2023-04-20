#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 *
 * @format: type and value to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list vl;

	char *str;
	int i = 0;

	va_start(vl, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(vl, int));
				break;
			case 'f':
				printf("%f", va_arg(vl, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(vl, int));
				break;
			case 's':
				str = va_arg(vl, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(vl);
}
