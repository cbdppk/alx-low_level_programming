#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - for printing half a string
 * @str : the first parameter which is a string
 *
 * return: void
 */

void puts_half(char *str)
{
	int a;
	int b;
	int c;
	int n;
	int d;

	a = strlen(str);

	if (a % 2 == 0)
	{
		c = a / 2;

		for (b = c; b <= a; b++)
		{
			printf("%c", str[b]);
		}
		a++;
	}
	else if (a % 2 != 0)
	{
		n = (a - 1) / 2;
		n++;
		for (d = n; d <= a; d++)
		{
			printf("%c", str[d]);
		}
		a++;
	}
	printf("\n");
}
