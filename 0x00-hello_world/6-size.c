#include<stdio.h>
/**
* main - Print the size of each variable
* Return: 0 prints sizes
*/
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("the size of a char: %ld byte(s).\n", sizeof(c));
	printf("the size of an int: %ld byte(s).\n", sizeof(i));
	printf("the size of a long int: %ld byte(s).\n", sizeof(li));
	printf("the size of a long long int: %ld byte(s).\n", sizeof(lli));
	printf("the size of a float: %ld byte(s).\n", sizeof(f));
	return (0);
}
