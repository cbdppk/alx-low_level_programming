#include "main.h"

/**
 * factorial - for finding the factorial of a number
 * @n: the int data/number
 * Return: returns int
 */

int factorial(int n)
{
	int k;

	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}

	k = n * factorial(n - 1);
	return (k);
}
