#include <stddef.h>
#include "3-calc.h"
/**
 * get_op_func - operator selector
 * @s: string pointer
 *
 * Return: operation result
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i <= 4)
	{

		if (*ops[i].op == *s && !(*(s + 1)))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
