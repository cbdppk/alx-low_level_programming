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
	int i;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc(sizeof(char) * i);
	if (ptr == NULL)
		return (NULL);

	ptr = strdup(str);

	return (ptr);
}
