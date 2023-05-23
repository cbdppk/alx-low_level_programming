#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - for printing alphabets
 *
 * Return: returns nothing
 */

void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
