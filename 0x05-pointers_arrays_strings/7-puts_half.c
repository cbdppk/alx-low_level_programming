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
	int k;

	a = strlen(str);
	k = strlen(str);


	if (a % 2 == 0)
	{
		c = a / 2;

		for (b = c; b < a; b++)
		{
			printf("%c", str[b]);
		}
		a++;
	}
	else if (k % 2 != 0)
	{
		n = (k - 1) / 2;
		for (d = n; d < k; d++)
		{
			printf("%c", str[d]);
		}
		k++;
	}
	printf("\n");
}
