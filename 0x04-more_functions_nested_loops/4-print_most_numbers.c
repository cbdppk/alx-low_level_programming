#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints some of the numbers
 *
 * Return: returns void
 */

void print_most_numbers(void)
{
	int a;

	a = 0;

	while (a < 10)
	{
		if ((a != 4) & (a != 2))
		{
			_putchar(a + '0');
		}
		a++;
	}
	_putchar('\n');
}
