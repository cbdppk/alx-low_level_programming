#include <string.h>
#include "main.h"

/**
 * puts_half - for printing half of a string
 * @str : first arguement of the function
 */

void puts_half(char *str)
{
	int len;
	int i;
	int k;
	int l;

	len = strlen(str);

	if ((len % 2) == 0)
	{
		k = len / 2;
		for (i = k; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if ((len % 2) == 0)
	{
		l = (len - 1) / 2;
		for (i = l; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
