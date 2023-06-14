#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - adds strings
 * @s1 : first arguement
 * @s2 : second arguement
 *
 * Return: returns char
 */

char *str_concat(char *s1, char *s2)
{
	int l1;
	int l2;
	int l;
	char *result;

	l1 = (s1 != NULL) ? strlen(s1) : 0;
	l2 = (s2 != NULL) ? strlen(s2) : 0;
	l = l1 + l2;
	result = malloc((len + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcpy(result, s1);
	}
	if (s2 != NULL)
	{
		strcat(result + l1, s2);
	}

	return (result);
}
