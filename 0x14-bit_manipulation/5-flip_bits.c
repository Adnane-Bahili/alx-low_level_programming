/**
 * flip_bits - computes the number of bits you would need
 * to flip to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits necessary to change n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int integer;

	integer = n ^ m;

	while (integer > 0)
	{
		integer &= integer - 1;
		i++;
	}
	return (i);
}
