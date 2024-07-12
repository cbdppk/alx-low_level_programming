#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - for pointing to a function that compares and returns index
 * @array: the array containing the elements
 * @size: the size of the array
 * @cmp: the pointer to the function
 * Return: returns the index of element which is the same
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		exit(1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		return (-1);
	}
}

