#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - for getting the operator
 * @s: the operator
 * Return: returns an int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	i = 0;

	while ((ops[i].op != NULL) && (strcmp(s, ops[i].op) != 0))
	{
		i++;
	}
	return (ops[i].op == NULL ? NULL : ops[i].f);
}
