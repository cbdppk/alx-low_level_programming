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
	int a;
	int p;
	int k;
	int l;

	len = strlen(s);
	a = len - 1;
	char c[a];

	for (n = a, p = 0; n >= 0, p <= a; n--, p++)
	{
		c[p] = s[n];

	}
	for (k = 0; k <= a; k++)
	{
		s[k] = c[k];
	}
}
