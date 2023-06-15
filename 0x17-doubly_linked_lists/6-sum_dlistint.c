#include "lists.h"
/**
 * sum_dlistint - sums all the data of a dlistint_t list
 * @head: dlistint_t list head
 *
 * Return: data sum
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
