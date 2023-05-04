#include <stddef.h>
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: character's string
 *
 * Return:	converted number
 *		0 if char != 0 || char != 1
 *		or if b == NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ttl, pwr;
	int lngt;

	if (b == NULL)
		return (0);
	for (lngt = 0; b[lngt]; lngt++)
	{
		if (b[lngt] != '0' && b[lngt] != '1')
			return (0);
	}
	for (pwr = 1, ttl = 0, lngt--; lngt >= 0; lngt--, pwr *= 2)
	{
		if (b[lngt] == '1')
			ttl += pwr;
	}
	return (ttl);
}
