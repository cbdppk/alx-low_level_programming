#include "main.h"

/**
 * swap_int - for swaping number using pointer
 *
 * @a : first parameter
 * @b : second parameter
 *
 * Return : void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;

	*b = *a;
	*a = c;
}
