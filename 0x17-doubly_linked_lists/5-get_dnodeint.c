#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
#include "1-dlistint_len.c"

/**
 * get_dnodeint_at_index - for getting to a node
 * @head: the head node
 * @index: the index
 *
 * Return: returns a node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num;
	unsigned int len;
	dlistint_t *ptr;

	num = 0;
	len = dlistint_len(head);

	if (!head || head == NULL)
	{
		return (NULL);
	}

	if (index > len)
	{
		return (NULL);
	}

	ptr = head;
	while (num != index)
	{
		ptr = ptr->next;
		num++;
	}
	return (ptr);
}
