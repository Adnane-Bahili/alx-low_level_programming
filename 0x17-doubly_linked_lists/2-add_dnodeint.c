#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning of a dlistint_t list
 * @head: dlistint_t list head pointer
 * @n: new node integer
 *
 * Return:	NULL when it fails
 *		new node address when successful
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
