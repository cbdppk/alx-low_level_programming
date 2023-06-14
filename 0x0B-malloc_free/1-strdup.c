#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  returns a pointer to a newly allocated space
 * @str: first arguement
 *
 * Return: returns char
 */

char *_strdup(char *str)
{
	char *copy;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	copy = malloc((len + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	strcpy(copy, str);

	return (copy);
}
