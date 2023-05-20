#include <stdio.h>

/**
 * main - prints alphabets
 *
 * Return: returns zero
 */

int main(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
