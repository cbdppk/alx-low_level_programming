#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - for finding the square root of a number
 * @n : the number
 * Return: returns int 
 */

int _sqrt_recursion(int n)
{
	double result;

	if (n < 0)
	{
		return (-1);
	}
	result = sqrt(n);

	return (result);
}
