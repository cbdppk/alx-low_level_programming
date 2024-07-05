#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - for copying a string
 * @str : the string to be duplicated
 * Return: returns a pointer
 */

char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(char *) * strlen(str));
	if (ptr == NULL)
		return (NULL);

	ptr = strdup(str);

	return (ptr);
}
