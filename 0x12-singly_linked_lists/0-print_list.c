#include "lists.h"

/**
 * print_list - for accessing and printing data in lists
 * @h: argument
 * Return: returns 0
 */


size_t print_list(const list_t *h)
{
	int count;
	list_t *ptr;

	ptr = NULL;
	count = 0;

	if (ptr->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		while (ptr != NULL)
		{
			count++;
			printf("[%d] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
		}
	}


	return (count);
}
