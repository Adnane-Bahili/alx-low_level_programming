#include <stdlib.h>
/**
 * malloc_checked - llocates memory using malloc
 * @b: memory to allocate
 *
 * Return:	pointer to the allocated memory
 *		98 if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);
	return (p);
}
