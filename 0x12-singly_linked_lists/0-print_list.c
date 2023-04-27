#include "lists.h"
/**
 * print_list - prints all elements of list_t
 * @h: print list
 *
 * Return: elements count
 */
size_t print_list(const list_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);
}
