#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of listint_t
 * @head: listint_t head pointer
 * @index: node count
 *
 * Return:	the nth node
 *		NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (n < index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		n++;
	}
	return (head);
}
