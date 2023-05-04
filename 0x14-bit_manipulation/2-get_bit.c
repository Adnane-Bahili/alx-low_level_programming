/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check
 * @index: starting from 0, of the bit I want to get
 *
 * Return:	bit at index value
 *		-1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
