#include <stdio.h>

/**
 * main - for printing the alphabs in reverse
 *
 * Return: always returns (0)
 *
 */

int main(void)
{
	char a;

	a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');

	return (0);
}
