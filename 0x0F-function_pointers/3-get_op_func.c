#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Pointer to function that select the right function.
 * @s: Operator used in operaion.
 *
 * Return: Function for operation, else NULL.
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
	int size = sizeof(ops) / sizeof(ops[0]);

	while (i < size)
	{
		if (ops[i].op == s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
