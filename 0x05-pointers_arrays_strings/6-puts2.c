#include "main.h"

/**
 * puts2 - for printing half of the string
 * @str : first parameter
 *
 * return: nothing
 */

void puts2(char *str)
{
	int a;

	for (a = 0; a < strlen(str); a+=2)
	{
		printf("%c", str[a]);
	}
	printf("\n");
}
