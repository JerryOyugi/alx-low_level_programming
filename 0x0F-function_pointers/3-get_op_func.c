#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - return a function to compute an opertaion on two integers
 *
 * @s: the operand
 *
 * Return: pointer to a function that executes operation specified by s
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while ((ops[i]).op != NULL)
	{
		if (ops[i].op[0] == s[0])
			return ((ops[i]).f);
		++i;
	}
	return (NULL);
}
