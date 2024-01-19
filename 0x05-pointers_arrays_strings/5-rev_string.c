#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - for reversing a string
 * @s : a string
 * return : returns 0;
 */

void rev_string(char *s)
{
	int len;
	int n;
	char c;

	len = strlen(s);
	len--;

	for (n = 0; n <= len; len--, n++)
	{
		c = s[n];
		s[n] = s[len];
		s[len] = c;
	}
}
