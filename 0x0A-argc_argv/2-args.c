#include <stdio.h>
#include <stdlib.h>

/**
 * main - for printing commandline arguements
 * @argc: first arguement
 * @argv: second arguement
 *
 * Return: returns 0;
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
