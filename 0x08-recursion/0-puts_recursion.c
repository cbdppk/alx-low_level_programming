#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - for printing using recursion
 * @s: first arguement
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		puts(s);
		_puts_recursion(s + 1);
	}
}
