#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - for printing all alphabets x10
 *
 * Return: returns void
 *
 */

void print_alphabet_x10(void)
{
	char a;
	int b;

	b = 0;

	while (b < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		b++;
		_putchar('\n');
	}
}
