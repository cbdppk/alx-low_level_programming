#include "main.h"

/**
 * _print_rev_recursion - for printing a function in reverse
 * @s : first arguement
 * Return : nothing
 */

void _print_rev_recursion(char *s)
{
	int n;
	int a;

	a = strlen(s);
	a--;

	for (n = a; n >= 0; n--)
	{
		printf("%c", s[n]);
	}
}
