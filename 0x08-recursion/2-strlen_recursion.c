#include "main.h"

/**
 * _strlen_recursion - for returning the length of a string using recursion
 * @s: the string data
 * Return: returns the length of string
 */

int _strlen_recursion(char *s)
{
	int n;

	n = 0;
	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}

	return (n);
}

