#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - for printing string in reverse
 * @s : first arguement
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
