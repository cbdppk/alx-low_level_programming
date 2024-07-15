#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - for adding two integers
 * @a: int data 1
 * @b: int data 2
 * Return: returns the sum of the integers
 */

int op_add(int a, int b)
{
	int sum;

	sum = 0;
	sum = a + b;
	return (sum);
}

/**
 * op_sub - for subtracts b from a
 * @a: the int data 1
 * @b: the int data 2
 * Return: returns the difference of a and b
 */

int op_sub(int a, int b)
{
	int sub;

	sub = 0;
	sub = a - b;
	return (sub);
}

/**
 * op_mul - for multiplying two integers
 * @a: the int data 1
 * @b: the int data 2
 * Return: returns the multiplication of a and b
 */

int op_mul(int a, int b)
{
	int mul;

	mul = 0;
	mul = a * b;
	return (mul);
}

/**
 * op_div - for dividing two integers
 * @a: the first integer to be divided
 * @b: the divisor
 * Return: returns int
 */

int op_div(int a, int b)
{
	int div;

	if (b == 0)
	{
		perror("Error\n");
		exit(100);
	}
	div = 0;
	div = a / b;

	return (div);
}

/**
 * op_mod - for finding the modulo of a by mob b
 * @a: int data 1;
 * @b: int data 2;
 * Return: returns modulo of a by b
 */

int op_mod(int a, int b)
{
	int mod;

	if (b == 0)
	{
		perror("Error\n");
		exit(100);
	}
	mod = 0;
	mod = a % b;

	return (mod);
}
