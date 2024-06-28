#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion - for returning the power of a number
 * @x: the base
 * @y: the power
 * Return: returns 0
 */

int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
		return (-1);
	else if (y != 0)
	{
		power = x * _pow_recursion(x, y - 1);
		return (power);
	}
	else
		return (1);
}
