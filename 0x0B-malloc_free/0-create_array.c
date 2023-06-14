#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - for creating an array with specificc memory size
 * @size: first arguement
 * @c : second arguement
 * Return: returns char
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		*(array + i) = c;
	}

	return (array);
}
