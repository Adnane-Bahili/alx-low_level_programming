int prime(int i, int j);
/**
 * is_prime_number - checks if an input integer is a prime number
 * @n: integer to check
 *
 * Return:	1 if n is a prime number
 *		0 if it is not
 */
int is_prime_number(int n)
{
	if ((n <= 1) || (n % 2 == 0))
		return (0);
	return (prime(n, n - 1));
}
/**
 * prime - checks if number is prime
 * @i: number
 * @j: iterator
 *
 * Return:	1 if i is prime
 *		0 if it is not
 */
int prime(int i, int j)
{
	if (j == 1)
		return (1);
	if (i % j == 0 && j > 0)
		return (0);
	return (prime(i, j - 1));
}
