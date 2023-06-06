#include "main.h"
#include <string.h>

/**
 * _strstr - finds occurrence of needle in haystack
 * @haystack: first arguement
 * @needle : second arguement
 *
 * Return: returns char
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
