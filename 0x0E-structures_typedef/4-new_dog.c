#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog structure
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Return:	new dog structure pointer
 *		NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_c, *owner_c;
	int name_l, owner_l;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	if (name != NULL)
	{
		for (name_l = 0; *(name + name_l) != '\0'; name_l++)
			;
		name_c = malloc(sizeof(char) * (name_l + 1));
		if (name_c == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		for (owner_l = 0; owner_l <= name_l; owner_l++)
			name_c[owner_l] = *(name + owner_l);
		new_dog->name = name_c;
	}
	if (owner != NULL)
	{
		for (name_l = 0; *(owner + name_l) != '\0'; name_l++)
			;
		owner_c = malloc(sizeof(char) * (name_l + 1));
		if (owner_c == NULL)
		{
			free(name_c);
			free(new_dog);
			return (NULL);
		}
		for (owner_l = 0; owner_l <= name_l; owner_l++)
			owner_c[owner_l] = *(owner + owner_l);
		new_dog->owner = owner_c;
	}
	if (age >= 0)
		new_dog->age = age;
	return (new_dog);
}
