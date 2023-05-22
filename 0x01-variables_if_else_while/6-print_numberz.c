#include <stdio.h>

/**
 * main - for printing single digits nums using putchar
 *
 * Return: always returns zero
 */

int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		if (a > -1)
		{
			putchar(a + '0');
		}
		a++;
	}
	putchar('\n');

	return (0);
}
