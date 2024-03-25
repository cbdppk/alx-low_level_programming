#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - for getting the length of a list
 * @h: only arguement
 * Return: returns len
 */

size_t list_len(const list_t *h)
{
	int count;

	if (h == NULL)
	{
		return (count);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
