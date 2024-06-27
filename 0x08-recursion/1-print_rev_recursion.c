#include "main.h"

/**
 * _print_rev_recursion - for printing a function in reverse
 * @s : first arguement
 * Return : nothing
 */

void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\0');
		return;
	}

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
