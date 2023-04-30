#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at a given position in listint_t
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: index of listint_t where the new node should be added
 * @n: new node integer
 *
 * Return:	new node address
 *		NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *node_copy = *head;
	unsigned int node = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = node_copy;
		*head = new_node;
		return (new_node);
	}
	while (node < (idx - 1))
	{
		if (node_copy == NULL || node_copy->next == NULL)
			return (NULL);
		node_copy = node_copy->next;
		node++;
	}
	new_node->next = node_copy->next;
	node_copy->next = new_node;
	return (new_node);
}
