#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dogs struct
 * @d: dogs struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
