#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - for testing the pointer functions code
 * @argc: the arguement count for main
 * @argv: the arguement in main
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		return (1);
	}

	result = 0;
	result = op_func(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}
