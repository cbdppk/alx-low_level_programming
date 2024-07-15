#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - for printing strings of a variadic function
 * @separator: The string that is printed in between the strings
 * @n: the number of elements to be passed
 * Return: this returns void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *current_string;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		current_string = va_arg(strings, char *);

		if (current_string == NULL)
			printf("(nill)");
		else
			printf("%s", current_string);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
