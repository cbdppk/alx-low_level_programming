#include <stdio.h>
#include "main.h"

/**
 * reverse_array - for reversing an array of n elements
 * @a : the first arguement(array)
 * @n : the size of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int k;
	int s;

	n--;
	for (k = 0; k <= n; k++, n--)
	{
		s = a[k];
		a[k] = a[n];
		a[n] = s;
	}
}
