#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "5-sqrt_recursion.c"

/**
 * prime_number - for recursively finding the prime number
 * @n: the int data
 * @i: the divisor
 * Return: returns int
 */

int prime_number(int n, int i)
{
	int top;

	if (n == 2)
		return (1);
	if (n < 2 || n % 2 == 0)
		return (0);

	top = _sqrt_recursion(n);
	if (i > top)
	{
		return (1);
	}
	if (n % i == 0)
		return (0);

	return (prime_number(n, i + 2));
}

/**
 * is_prime_number - for finding the prime number
 * @n : the int data
 * Return: returns int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_number(n, 3));
}
