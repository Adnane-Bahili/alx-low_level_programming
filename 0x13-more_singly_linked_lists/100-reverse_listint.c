#include "lists.h"
/**
 * reverse_listint - reverses listint_t
 * @head: list_t head address pointer
 *
 * Return: 1st node of the reversed list pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *last;

	if (head == NULL || *head == NULL)
		return (NULL);
	last = NULL;
	while ((*head)->next != NULL)
	{
		first = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = first;
	}
	(*head)->next = last;
	return (*head);
}
