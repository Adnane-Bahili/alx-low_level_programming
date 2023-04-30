#include "lists.h"

listint_t **mem_reallocate(listint_t **linked_l, size_t size,
		listint_t *new_node);

/**
 * free_listint_safe - frees listint_t
 * @head: listint_t head address pointer
 *
 * Return: nodes count
 */
size_t free_listint_safe(listint_t **head)
{
	size_t n = 0, i;
	listint_t **linked_l = NULL;
	listint_t *next_node;

	if (*head == NULL || !head)
		return (n);
	while (*head != NULL)
	{
		i = 0;

		while (i < n)
		{
			if (*head == linked_l[i])
			{
				*head = NULL;
				free(linked_l);
				return (n);
			}
			i++;
		}
		n++;
		linked_l = mem_reallocate(linked_l, n, *head);
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	free(linked_l);
	return (n);
}
/**
 * mem_reallocate - reallocates memory for an array of pointers to the nodes
 * @linked_l: the old list to append
 * @size: new list size
 * @new_node: new node to add to the list
 *
 * Return: new list pointer
 */
listint_t **mem_reallocate(listint_t **linked_l, size_t size,
		listint_t *new_node)
{
	listint_t **list_new;
	size_t i;

	list_new = malloc(size * sizeof(listint_t *));
	if (list_new == NULL)
	{
		free(linked_l);
		exit(98);
	}

	i = 0;

	while (i < size - 1)
	{
		list_new[i] = linked_l[i];
		i++;
	}
	list_new[i] = new_node;
	free(linked_l);
	return (list_new);
}
