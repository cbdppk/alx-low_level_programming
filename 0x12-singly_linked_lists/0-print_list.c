#include "lists.h"

/**
 * print_list - for accessing and printing data in lists
 * @h: argument
 * Return: returns 0
 */


size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		if (h->str == NULL)
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
