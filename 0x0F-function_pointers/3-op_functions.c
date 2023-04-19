/**
 * op_add - sum of a and b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: operation result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction of b from a
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: operation result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply a and b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: operation result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divise a by b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: operation result
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}
/**
 * op_mod - modulus of a by b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: operation result
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
