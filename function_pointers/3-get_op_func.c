#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - Function that gets the function
 *
 * @s: The parameter that represents the arg
 *
 * Return: Returns the function result as integer
 *
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
	int i;

	while (i < (int)(sizeof(ops) / sizeof(op_t)))
	{
		if (*s == *ops[i].op)
		{
			return (*ops[i].f);
		}

		i++;
	}

	return (NULL);
}
