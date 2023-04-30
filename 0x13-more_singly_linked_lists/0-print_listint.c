#include "lists.h"
/**
 * print_listint - prints all elements of listint_t list
 * @h: list_t head pointer
 *
 * Return: nodes count in the list_t
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
