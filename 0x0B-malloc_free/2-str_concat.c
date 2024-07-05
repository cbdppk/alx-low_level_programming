#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - for concatenating two strings
 * @s1 : first string
 * @s2 : second string
 * Return:  a pointer to the concantenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	int n;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	i = 0;
	n = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[n] != '\0')
		n++;


	ptr = malloc(sizeof(char) * (i + n));
	ptr = strdup(s1);
	strcat(ptr, s2);

	return (ptr);
}
