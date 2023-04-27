#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to list_t
 * @str: string to add
 *
 * Return:	new element's address
 *		NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *d = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));

	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = len;
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (d->next)
		d = d->next;
	d->next = n;
	return (n);
}
