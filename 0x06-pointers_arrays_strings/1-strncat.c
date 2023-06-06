#include "main.h"
#include <string.h>

/**
 * _strncat - for concatenating
 * @dest: first arguement
 * @src: second arguement
 * @n: third arguement
 * Return: returns char
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
