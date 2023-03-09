#include "main.h"

/*
 * factorial - gives us the fatorial of the number
 *@n: interger parameter
 *
 * Return: returns -1
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return n * factorial(n - 1);
}
