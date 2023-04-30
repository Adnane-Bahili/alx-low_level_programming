#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at a given index of listint_t list
 * @head: listint_t head address pointer
 * @index: nodes index
 *
 * Return:	1 On success
 *		-1 On failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *node_copy = *head;
	unsigned int node_del = 0;

	if (node_copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node_copy);
		return (1);
	}
	while (node_del < (index - 1))
	{
		if (node_copy->next == NULL)
			return (-1);
		node_copy = node_copy->next;
		node_del++;
	}
	del = node_copy->next;
	node_copy->next = del->next;
	free(del);
	return (1);
}
