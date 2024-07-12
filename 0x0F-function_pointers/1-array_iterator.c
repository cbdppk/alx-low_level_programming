#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * array_iterator - for accesible functions in a array form
 * @array: the array
 * @size: the size of the array
 * @action: the pointer to the functions
 * Return: returns void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		exit(1);

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
