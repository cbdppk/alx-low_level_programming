#include <stdio.h>

/**
 * main - for printing alphabets
 *
 * Return: always returns (0);
 *
 */

int main(void)
{
	int a;

	a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		if (a == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');

	return (0);
}
