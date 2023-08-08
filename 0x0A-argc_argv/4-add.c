#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - for addind two command line arguements
 * @argc: command line counts
 * @argv: command line vectors
 *
 * Return: returns zero
 */

int main(int argc, char *argv[])
{
	int count;
	int results;

	for (count = 1; count < argc; count++)
	{
		if(argc < 1)
		{
			printf("0\n");
		}
		else if(!isdigit(argv[count]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			results += atoi(argv[count]);
		}
	}
	printf("%d\n", results);

	return (0);
}
