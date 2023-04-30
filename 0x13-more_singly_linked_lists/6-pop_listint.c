#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t
 *		and returns the head node’s data (n)
 * @head: listint_t head address pointer
 *
 * Return:	node head value
 *		0 if it's empty
 */
int pop_listint(listint_t **head)
{
	listint_t *working;
	int data;

	if (*head == NULL)
		return (0);
	working = *head;
	data = working->n;
	*head = (*head)->next;
	free(working);
	return (data);
}
