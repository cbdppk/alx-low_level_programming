#include "main.h"
#include <string.h>

/**
 * _strpbrk - for locating the first occurrence in s
 * @s: first arg
 * @accept : 2 arg
 * Return: returns char;
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
