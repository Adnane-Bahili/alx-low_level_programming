#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print first 98 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int fa, fa1, fa2, f_b, f_b1, f_b2, f_c,
		f_c1, f_c2, f_d, f_e, div;


	fa = 1;
	f_b = 2;
	div = 1000000000;
	f_c = fa + f_b;

	printf("%lu, ", fa);
	printf("%lu, ", f_b);

	for (f_d = 3; f_d < 89; f_d++)
	{
		printf("%lu, ", f_c);
		fa = f_b;
		f_b = f_c;
		f_c = fa + f_b;
	}
	f_b1 = f_b / div;
	f_b2 = f_b % div;
	f_c1 = f_c / div;
	f_c2 = f_c % div;
	for (f_e = 89; f_e < 98; f_e++)
	{
		printf("%lu%lu, ", f_c1, f_c2);
		fa1 = f_b1;
		fa2 = f_b2;
		f_b1 = f_c1;
		f_b2 = f_c2;
		f_c1 = fa1 + f_b1 + ((fa2 + f_b2) / div);
		f_c2 = (fa2 + f_b2) % div;
	}
	printf("%lu%lu\n", f_c1, f_c2);
	return (0);
}
