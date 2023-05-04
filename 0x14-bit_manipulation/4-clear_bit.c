/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: integer pointer
 * @index: bit to change location
 *
 * Return:	1 if success
 *		-1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
