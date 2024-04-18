#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_dlistint - for summing all the int data in a list
 * @head : the head node
 * Return: returns 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum;

	sum = 0;

	if (!head || head == NULL)
	{
		return (0);
	}

	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
