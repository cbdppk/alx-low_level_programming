#include <stdio.h>

/**
 * main - prints some alphabets
 *
 * Return: return zero
 */

int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		if ((a != 'q') & (a != 'e'))
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
		return (0);
	}
