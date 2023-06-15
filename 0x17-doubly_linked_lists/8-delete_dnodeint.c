#include "lists.h"
/**
 * delete_dnodeint_at_index -	deletes a node from a dlistint_t
 *				at a given index
 * @head: dlistint_t head pointer
 * @index: node to be deleted index
 *
 * Return:	-1 wehen it fails
 *		1 when succesful
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
