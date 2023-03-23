#include "main.h"
/**
 * _isupper - Checks if character is uppercase
 *@c: character
 * Return: 1 if it is uppercase, 0 if it is not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
