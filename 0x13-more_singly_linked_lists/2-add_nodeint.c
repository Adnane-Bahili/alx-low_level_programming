#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of listint_t
 * @head: list_t head address pointer
 * @n: new node integer
 *
 * Return:	address of the new element
 *		NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
