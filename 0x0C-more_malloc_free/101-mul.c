#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return:	1 if it's a digit
 *		0 otherwise
 */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}
/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
    int i = 0;

    while (*s++)
        i++;
    return (i);
}
/**
 * multiply - multiply two numbers
 * @s1: first num
 * @s2: the second big number string
 *
 * Return: the result
 */
char *multiply(char *s1, char *s2)
{
    char *c;
    int l1, l2, i, j, k, l;

    l1 = _strlen(s1);
    l2 = _strlen(s2);
    c = malloc(i = l = l1 + l2);
    if (!c)
        printf("Error\n"), exit(98);
    while (i--)
        c[i] = 0;

    for (l1--; l1 >= 0; l1--)
    {
        if (!_isdigit(s1[l1]))
        {
            free(c);
            printf("Error\n"), exit(98);
        }
        i = s1[l1] - '0';
        k = 0;

        for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
        {
            if (!_isdigit(s2[l2]))
            {
                free(c);
                printf("Error\n"), exit(98);
            }
            b = s2[l2] - '0';

            k += c[l1 + l2 + 1] + (i * j);
            c[l1 + l2 + 1] = k % 10;

            k /= 10;
        }
        if (k)
            c[l1 + l2 + 1] += k;
    }
    return (c);
}
/**
 * main - multiply two numbers
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
    char *c;
    int i, j, k;

    if (argc != 3)
        printf("Error\n"), exit(98);

    k = _strlen(argv[1]) + _strlen(argv[2]);
    c = big_multiply(argv[1], argv[2]);
    j = 0;
    i = 0;
    while (j < k)
    {
        if (c[j])
            i = 1;
        if (i)
            _putchar(c[j] + '0');
        j++;
    }
    if (!i)
        _putchar('0');
    _putchar('\n');
    free(c);
    return (0);
}
