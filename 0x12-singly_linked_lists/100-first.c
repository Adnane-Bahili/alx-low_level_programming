#include <stdio.h>
/**
 * predecessor - function that runs before main
 *
 * Return: void
 */
void __attribute__ ((constructor)) predecessor()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
