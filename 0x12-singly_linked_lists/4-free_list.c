#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - for freeing a list
 * @head: the head pointer
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;

		free(head->str);

		free(head);

		head = ptr;
	}
}
