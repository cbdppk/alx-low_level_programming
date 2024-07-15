#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - for printing the numbers given as arguements
 * @separator: the string part of the function
 * @n: the int part of the parameter
 * Return: this function returns void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int current_num;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		current_num = va_arg(nums, int);
		printf("%d", current_num);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
