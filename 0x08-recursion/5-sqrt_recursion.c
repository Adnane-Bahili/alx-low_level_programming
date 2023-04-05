int nat_sqr_root(int i, int j);
/**
 * _sqrt_recursion - return the natural square root of number
 * @n: number
 *
 * Return:	the natural square root of number n
 *		-1 if the number has no natural square root
 */
int _sqrt_recursion(int n)
{
	return (nat_sqr_root(1, n));
}
/**
 * nat_sqr_root - checks the input number from i to the j
 * @i: number to square
 * @j: j number to check
 * Return: natural square root of number j
 */
int nat_sqr_root(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (nat_sqr_root(i + 1, j));
}
