#include "main.h"
#include <stdio.h>

/**
 * more_numbers - for printing numbers 10 times
 *
 * Return: returns void
 */

void more_numbers(void)
{
	int a;
	int b;

	a = 0;

	while (a < 10)
	{
		b = 0;
		while (b <= 14)
		{
			_putchar(b + '0');
			b++;
		}
		_putchar('\n');
	}
}
