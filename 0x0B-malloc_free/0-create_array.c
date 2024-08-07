#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - for creating an array
 * @size : the size of the array
 * @c: the characters
 * Return: returns 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
