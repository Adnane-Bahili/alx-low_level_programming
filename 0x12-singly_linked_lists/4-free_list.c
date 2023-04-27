#include "lists.h"
/**
 * free_list - frees list_t
 * @head: list to free
 */
void free_list(list_t *head)
{
	list_t *d;

	while (head)
	{
		d = head->next;
		free(head->str);
		free(head);
		head = d;
	}
}
