#include <stdio.h>
#include <main.h>
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - for converting to upper case.
 * @s : first arguement(string)
 * Return: char;
 */

char *string_toupper(char *s)
{
	int a;
	int n;
	char k;

	n = strlen(s);
	for (a = 0; a < n; a++)
	{
		k = toupper(s[a]);
		s[a] = k;
	}

	return (s);
}
