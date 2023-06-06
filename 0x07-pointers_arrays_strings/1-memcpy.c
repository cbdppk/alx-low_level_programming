#include <string.h>
#include "main.h"

/**
 * _memcpy - copies bytes from src to dest
 * @dest: arguement 1
 * @src: arguement 2
 * @n: arguement 3
 * Return: returns char
 */


char *_memcpy(char *dest, char *src, unsigned int n);
{
	return (memcpy(dest, src, n));
}
