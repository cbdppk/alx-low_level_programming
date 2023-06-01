#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * rev_string - for reversing a string
 * @s : first arguement
 */

void rev_string(char *s)
{
	int y = strlen(s);
	char k[y];
	int l = y - 1;

	for (int i = 0; i < y; i++)
	{
		k[i] = s[l];
		l--;
	}

}
