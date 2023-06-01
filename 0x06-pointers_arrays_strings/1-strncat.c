#include "main.h"

/**
 * char *_strncat(char *dest, char *src, int n) -
 * @dest : first arguement 
 * @ src : second arguement 
 * @n : third arguement
 * Return: returns e the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *k;
	k = strncat(dest, src, n+1);
	return (k);
}
