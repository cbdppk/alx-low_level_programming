#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - for adding a node to the end of a list
 * @head: a head pointer
 * @str: the string data
 *
 * Return: returns the adress
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *ptr;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = node;
}
	return (node);
}
