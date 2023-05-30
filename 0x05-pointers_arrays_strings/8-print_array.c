#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the elements in array
 * @a : first arguement
 * @n : second arguement
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b != (n - 1))
		{
			printf("%d, ", a[b]);
		}
		else
		{
			printf("%d", a[b]);
		}
	}
	_putchar('\n');
}
