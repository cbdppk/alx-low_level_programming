#include "main.h"
#include <ctype.h>

/**
 * _islower - for checking for lower cases
 *
 * @c: for taking the arguement for func islower
 * Return: return 1 if true and 0 iffalse
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
