#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * dlistint_len - for getting the list size
 * @h: the head node;
 *
 * Return: returns 0
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num;

	num = 0;
	if (!h || h == NULL)
		return (num);

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
