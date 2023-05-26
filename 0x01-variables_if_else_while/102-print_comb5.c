#include <stdio.h>

/**
 * main - for printing all possible combinations
 *
 * Return: returns 0;
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
