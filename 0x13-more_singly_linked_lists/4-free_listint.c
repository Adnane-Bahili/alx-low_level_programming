#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: listint_t head pointer
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *del;

	while (head)
	{
		del = head->next;
		free(head);
		head = del;
	}
}
