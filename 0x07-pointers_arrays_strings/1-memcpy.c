#include "main.h"
#include <string.h>

/**
 * _memcpy - copies bytes from src to dest
 * @dest: first arguement
 * @src: second arguement
 * @n: third arguement
 * Return: returns char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
