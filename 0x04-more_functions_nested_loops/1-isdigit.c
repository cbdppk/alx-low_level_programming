#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * _isdigit - for verifying for number
 *
 * @c: first arguement
 *
 * Return: returns 0 or 1
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
