#include "search_algos.h"
/**
 * linear_skip - searches for an 'int' value in an array using Linear skip
  *		also prints a value when It's compared in the list
  * @list: head of linked list pointer
  * @value: what to search for
  *
  * Return:	'value' location first node pointer
  *		-1 when 'value' is not present, or array == NULL
  */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jmp;

	if (list == NULL)
		return (NULL);
	for (node = jmp = list; jmp->next != NULL && jmp->n < value;)
	{
		node = jmp;

		if (jmp->express != NULL)
		{
			jmp = jmp->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jmp->index, jmp->n);
		}
		else
		{
			while (jmp->next != NULL)
				jmp = jmp->next;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jmp->index);
	for (; node->index < jmp->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	return (node->n == value ? node : NULL);
}
