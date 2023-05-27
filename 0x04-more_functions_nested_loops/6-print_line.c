#include "main.h"

/**
 * print_line - for printintg lines
 * @n: first arguement
 *
 * Return: return void
 */

void print_line(int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
