#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - for freeing a list
 * @head : the head pointer;
 *
 * Return: returns 0;
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head || head == NULL)
	{
		return;
	}

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
