#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - for printing a doubly linked list
 * @h: the head pointer
 *
 * Return: returns 0
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num;

	num = 0;
	if (!h || h == NULL)
		return (num);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
