#include "lists.h"
/**
 * insert_dnodeint_at_index -	inserts a new node in a dlistint_t
 *				list at a specific position
 * @h: dlistint_t list head pointer
 * @idx: new node insert location
 * @n: new node integer
 *
 * Return:	NULL when it fails
 *		new node address when successful
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;
	return (new);
}
