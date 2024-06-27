#include "main.h"

/**
* _puts_recursion -for printing a string to the terminal
* @s : first and only arguement
*Return : return nothing
*/

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
