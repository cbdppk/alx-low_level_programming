#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * find_number - for finding the number
 * @n: the number to find it's square root
 * @guess: the loop or the iteration for finding the natural square root
 * Return: returns int
 */

int find_number(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (find_number(n, guess + 1));
	}
}


/**
 * _sqrt_recursion - for finding the square root of a number
 * @n : the number
 * Return: returns int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (find_number(n, 1));
	}
}
