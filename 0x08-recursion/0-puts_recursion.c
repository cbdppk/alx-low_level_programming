#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - for printing using recursion
 * @s: first arguement
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		puts("");
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);

}
