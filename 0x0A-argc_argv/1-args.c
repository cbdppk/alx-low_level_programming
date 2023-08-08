#include <stdio.h>
#include <stdlib.h>

/**
 * main - for printing arguement counts
 *
 * @argc: arguement count
 * @argv: arguement vectors
 *
 * Return: returns 0;
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
