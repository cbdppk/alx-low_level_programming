#include <stdio.h>

/**
 * main - for printing numbers
 *
 * Return: returns 0;
 */

int main(void)
{
	int a;

	a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');

	return (0);

}
