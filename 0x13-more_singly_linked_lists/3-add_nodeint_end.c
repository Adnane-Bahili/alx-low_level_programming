#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: list_t head address pointer
 * @n: new node integer
 *
 * Return:	address of the new element
 *		NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *end;

	new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		end = *head;
		while (end->next)
			end = end->next;
		end->next = new_node;
	}
	return (*head);
}
