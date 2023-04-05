/**
 * factorial- Returns the factorial of a given number
 * @n: number to factor
 *
 * Return:	factorial of n
 *		1 if n == 0
 *		-1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
