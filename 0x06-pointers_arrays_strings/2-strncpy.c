#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - for copying src to dest
 * @dest : first arguement
 * @src : second srguement
 * @n : third arguement
 * Return: returns char
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
