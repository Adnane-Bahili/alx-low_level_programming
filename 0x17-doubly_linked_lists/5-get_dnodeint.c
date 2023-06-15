#include "lists.h"
/**
 * get_dnodeint_at_index - locates a node in a dlistint_t list
 * @head: dlistint_t list head
 * @index: node to look for
 *
 * Return:  NULL If the node does not exist
 *      node address
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
