#include "search_algos.h"
/**
 * jump_list -	searches for an 'int' value in an array using Jump search
  *		also prints a value when It's compared in the list
  * @list: head of linked list pointer
  * @size: node's element count
  * @value: what to search for
  *
  * Return:	'value' location first node pointer
  *		-1 when 'value' is not present, or array == NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t stp, stp_size;
	listint_t *node, *jmp;

	if (list == NULL || size == 0)
		return (NULL);

	stp = 0;
	stp_size = sqrt(size);

	for (node = jmp = list; jmp->index + 1 < size && jmp->n < value;)
	{
		node = jmp;

		for (stp += stp_size; jmp->index < stp; jmp = jmp->next)
		{
			if (jmp->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jmp->index, jmp->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jmp->index);
	for (; node->index < jmp->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	return (node->n == value ? node : NULL);
}
