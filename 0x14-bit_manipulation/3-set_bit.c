/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer pointer
 * @index: location of the bit to change
 *
 * Return:	1 if success
 *		-1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
