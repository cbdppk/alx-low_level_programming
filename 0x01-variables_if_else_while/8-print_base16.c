#include <stdio.h>

/**
 * main - for printing base 16 figures
 *
 * Return: always returns 0;
 *
 */

int main(void)
{
	int a;
	char c;

	a = 0;
	c = 'a';

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
