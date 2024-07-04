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
	if (str == NULL)
		return (NULL);

	char *ptr;
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc(sizeof(char) * i);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
