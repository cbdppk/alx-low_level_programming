#include <string.h>
#include "main.h"

/**
 * rev_string - for reversing a string
 * @s : first arguement
 */

void rev_string(char *s)
{
	char str[strlen(s)];
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
