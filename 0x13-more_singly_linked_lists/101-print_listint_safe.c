#include "lists.h"

const listint_t **reallocate_mem(const listint_t **list, size_t size,
		const listint_t *new);

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: listint_t head pointer
 *
 * Return: nodes count
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0, i;
	const listint_t **linked_l = NULL;

	while (head != NULL)
	{
		i = 0;

		while (i < n)
		{
			if (head == linked_l[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(linked_l);
				return (n);
			}
			i++;
		}
		n++;
		linked_l = reallocate_mem(linked_l, n, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(linked_l);
	return (n);
}
/**
 * reallocate_mem - reallocates memory for an array of pointers to the nodes
 * @linked_l: old list to append
 * @size: new list size
 * @new_node: new node to add to the list
 *
 * Return: new list pointer
 */
const listint_t **reallocate_mem(const listint_t **linked_l, size_t size,
		const listint_t *new_node)
{
	const listint_t **list_new;
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
