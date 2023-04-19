#include <stddef.h>
/**
 *array_iterator - executes function as a parameter on each element of an array
 *@array: array where to use function
 *@size: array size
 *@action: function pointer
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
		while  (size--)
			action(*(array++));
}
