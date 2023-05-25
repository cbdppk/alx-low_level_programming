#include "main.h"
#include <stdio.h>

/**
 * print_numbers - for printing numbers
 *
 * Return: returns zero
 */

void print_numbers(void)
{
	int a;

	a = 0;

	while (a < 10)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
