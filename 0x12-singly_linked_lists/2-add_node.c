#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - for adding node at the beginning
 * @head: the head pointer
 * @str: the string data
 *
 * Return: returns 0
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *node;

	node = malloc(sizeof(list_t));
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;

	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	else
	{
		return (node);
	}
}
