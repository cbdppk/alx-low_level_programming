#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include "1-dlistint_len.c"

/**
 * delete_dnodeint_at_index - for deleting a node in doubly list
 * @head: the head node
 * @index: the index for deletion
 *
 * Return: returns 0
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	dlistint_t *temp;
	dlistint_t *temp1;
	dlistint_t *temp2;
	unsigned int num;
	unsigned int len;

	ptr = *head;
	num = 0;
	len = dlistint_len(*head);
	if (!head || *head == NULL)
	       	return (-1);
	if (index > len)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = ptr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (num != index)
	{
		ptr = ptr->next;
		num++;
	}
	temp = ptr;
	temp1 = ptr->prev;
	temp2 = ptr->next;
	temp1->next = temp2;
	if (temp2 != NULL)
		temp2->prev = temp1;
	free(temp);
	return (1);
}

