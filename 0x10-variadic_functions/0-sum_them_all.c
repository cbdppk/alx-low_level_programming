#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a variadic function used to sum all given arguements
 * @n: the first arguement
 * Return: returns an int data
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	int result;

	result = 0;
	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(sum, int);
	}

	va_end(sum);

	return (result);
}

