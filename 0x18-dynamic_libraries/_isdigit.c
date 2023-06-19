#include "main.h"
/**
 * _isdigit - Checks if character is a digit
 *@c: character
 * Return: 1 if it is a digit, 0 if it is not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
