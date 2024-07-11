#include "function_pointers.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_name - using pointer to functions to print name
 * @name: the char data
 * @f: the pointer to the function
 * Return: returns void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(1);
	(*f)(name);
}
