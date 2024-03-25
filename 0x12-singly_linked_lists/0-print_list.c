#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - for printing the list
 * @h: the only argument
 *
 * Return: returns count
 */

size_t print_list(const list_t *h)
{
	int count;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (h->str != NULL)
	{
		count++;
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}
