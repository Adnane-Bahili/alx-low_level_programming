#include "lists.h"
/**
 * free_listint2 - frees a listint_t and sets the head to NULL
 * @head: listint_t head address pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *del;

	if (!head)
		return;
	while (*head)
	{
		del = (*head)->next;
		free(*head);
		*head = del;
	}
	head = NULL;
}
