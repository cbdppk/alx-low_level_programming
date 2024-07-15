#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"


int (*get_op_func(char *s))(int, int)
{
	op_t funcs[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div}, {"%", op_mod}, {NULL, NULL}};
	int i;

	i = 0;
	while ((funcs[i].op != NULL) && strcmp(s, funcs[i].op) != 0)
		i++;
	return (funcs[i].op == NULL ? NULL:funcs[i].f);



int main(int argc, char *argv[])
{
	int i;
	int (*func)(int)(int);

	if (argc != 4)
		return (-1);

	func = get_op_func(argv[2]);

	i = func(atoi(argv[1]), atoi(agrv[3]));

	return (i);
}

