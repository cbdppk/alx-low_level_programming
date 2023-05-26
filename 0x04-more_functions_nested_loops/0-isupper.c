#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isupper - for checking for upper cases
 * @c: the arguement
 *
 * Return: returns 1 if true and 0 if false
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
