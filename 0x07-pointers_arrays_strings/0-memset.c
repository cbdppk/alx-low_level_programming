#include <string.h>
#include "main.h"

/**
 * _memset - this func fill n bytes ...
 * @s: first arguement
 * @b: second arguement
 * @n: third arguement
 * Return: returns a char;
 */

char *_memset(char *s, char b, unsigned int n)
{
	return(memset(s, b, n));
}
