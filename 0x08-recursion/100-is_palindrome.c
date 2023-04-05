int _strlen_recursion(char *s);
int palindrome(int i, int j, char *c);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return:      1 if palindrome
 *              0 if not
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s) - 1;

	return (palindrome(0, i, s));
}
/**
 * _strlen_recursion- returns the length of a string
 * @s: string
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * palindrome - checks to see if a string is a palindrome
 * @i: string start
 * @j: string finish
 * @c: character to check
 *
 * Return:      1 if palindrome
 *              0 if not
 */
int palindrome(int i, int j, char *c)
{
	if (i >= j)
		return (1);
	else if (c[i] != c[j])
		return (0);
	else
		return (palindrome(i + 1, j - 1, c));
}
