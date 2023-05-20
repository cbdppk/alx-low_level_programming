#include <stdio.h>

/**
 * main - for printing alphabets
 *
 * Return: returns 0
 *
 */

int main(void)
{
	char a;
	char b;

	a = 'a';
	b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
