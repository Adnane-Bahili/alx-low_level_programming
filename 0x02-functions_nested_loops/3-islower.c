#include "main.h"
/**
 * _islower - Checks if character is lowercase
 *@c: character
 * Return: 1 if it is lowercase, 0 if is not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
