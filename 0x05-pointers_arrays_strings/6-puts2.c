#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - puts2
 * @str : first arguement
 */

void puts2(char *str)
{
	int len;
	int n;

	len = strlen(str);

	for (n = 0; n < len; n++)
	{
		if ((n % 2) == 0)
		{
			printf("%c", str[n]);
		}
	}
	printf("\n");
}
