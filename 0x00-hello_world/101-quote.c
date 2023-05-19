#include <stdio.h>

/**
 * main - for printing without using puts or printf
 *
 * Return: always returns 1
 *
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);

	return (1);
}
