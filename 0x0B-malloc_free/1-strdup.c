#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space
 * @str: first arguement
 *
 * Return: returns char
 */

char *_strdup(char *str)
{
	char *copy;
	int i;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	char *copy = malloc((len + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	strcpy(copy, str);

	return (copy);
}
