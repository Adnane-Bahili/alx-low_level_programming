#include <stdarg.h>
/**
 * sum_them_all - sums all paramameters
 * @n: constant unsigned integer
 *
 * Return:	sum result
 *		0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list l;

	unsigned int i;
	int sums = 0;

	va_start(l, n);
	if (n == 0)
		return (0);

	i = 0;

	while (i < n)
	{
		sums += va_arg(l, unsigned int);
		i++;
	}
	va_end(l);
	return (sums);
}
