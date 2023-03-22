#include "main.h"
/**
 * _isalpha - Checks if character is an alphabet
 *@c: character
 * Return: 1 if it is an alphabet, 0 if is not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
