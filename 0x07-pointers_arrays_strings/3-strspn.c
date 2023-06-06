#include "main.h"
#include <string.h>

/**
 * _strspn - returns bytes of the initial segement of s
 * @s: arg 1
 * @accept: arg 2
 * Return: returns int;
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
