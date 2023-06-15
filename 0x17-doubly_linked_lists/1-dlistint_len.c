#include "lists.h"
/**
 * dlistint_len - counts elements in a linked dlistint_t list
 * @h: dlistint_t list head
 *
 * Return: list nodes count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;
		h = h->next;
	}
	return (nod);
}
