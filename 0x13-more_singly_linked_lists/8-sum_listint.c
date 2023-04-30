#include "lists.h"
/**
 * sum_listint - returns the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	listint_t *del;
	int s;

	del = head, s = 0;

	if (!head)
		return (0);
	while (del)
	{
		s += del->n;
		del = del->next;
	}
	return (s);
}
