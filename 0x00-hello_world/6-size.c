#include <stdio.h>

/**
 * main - for printing sizeofs
 *
 * Return: for returning zero
 */

int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));

	return (0);
}
