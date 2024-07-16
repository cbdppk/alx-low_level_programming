#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - for printing all the given parameters of a variadic function
 * @format: the format which the printing depends on
 * Return: returns a void
 */
void print_all(const char *const format, ...)
{
	int i, flag;
	va_list all;
	char *s;

	i = 0;
	va_start(all, format);
	while ((format != NULL) && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(all, int));
				flag = 0;
				break;
			case 'i':
				printf("%d", va_arg(all, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(all, double));
				flag = 0;
				break;
			case 's':
				s = va_arg(all, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(all);
}
