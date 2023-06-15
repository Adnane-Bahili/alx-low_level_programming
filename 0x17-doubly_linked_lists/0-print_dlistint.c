#include "lists.h"
/**
 * print_dlistint - prints all elements of dlistint_t list
 * @h: dlistint_t list head
 *
 * Return: list nodes count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nod);
}
