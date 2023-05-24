#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - for printing the last digit
 * @a: only arguement
 *
 * Return: return the last value of a number
 */

int print_last_digit(int a)
{
	int c;

	c = a % 10;
	_putchar(c + '0');
	return (c);
}
