#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * rev_string - for reversing a string
 * @s : first arguement
 */

void rev_string(char *s)
{
	int a = strlen(s);
	char str[a];
	int i;
	int j;
	int k;

	j = strlen(s);
	k = j - 1;

	for (i = 0; i < j; i++)
	{
		str[i] = s[k];
		k--;
	}
	s = str;
}
