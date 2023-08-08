#include <stdio.h>
#include <stdlib.h>

/**
 * main - for multiplying arguements on the commadline
 *
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: returns zero
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
