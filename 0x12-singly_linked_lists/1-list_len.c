#include "lists.h"
/**
 * list_len - computes elements count in a linked list_t
 * @h: print list
 *
 * Return: elements count
 */
size_t list_len(const list_t *h)
{
	unsigned int len;

	for (len = 0; h != NULL ; len++)
		h = h->next;
	return (len);
}
