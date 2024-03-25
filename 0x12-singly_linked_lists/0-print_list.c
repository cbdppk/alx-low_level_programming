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

	while (h)
	{
		if (h->str = NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
