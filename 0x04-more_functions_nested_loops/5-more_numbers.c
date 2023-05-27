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

	a = 1;

	while (a <= 10)
	{
		b = 1;
		while (b <= 14)
		{
			if (b >= 10)
			_putchar('1');
			_putchar((b % 10) + '0');
			b++;
		}
		a++;
		_putchar('\n');
	}
}
