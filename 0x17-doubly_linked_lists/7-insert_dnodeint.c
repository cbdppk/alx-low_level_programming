#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
#include "1-dlistint_len.c"

/**
 * insert_dnodeint_at_index - for inserting a node at any node
 * @h: the head the node
 * @n: the int data
 * @idx: the index
 *
 * Return: returns 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *ptr;
	unsigned int num;
	unsigned int len;
	dlistint_t *temp;

	num = 0;
	len = dlistint_len(*h);
	ptr = *h;
	if (!h || idx > len)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0 || *h == NULL)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (num < idx - 1)
	{
		ptr = ptr->next;
		num++;
	}
	temp = ptr->next;
	ptr->next = new_node;
	temp->prev = new_node;
	new_node->next = temp;
	new_node->prev = ptr;
	return (new_node);
}
