#include <stdio.h>

int add(int a, int b)
{
	int k = 0;

	k = a + b;

	printf("the value of the integers are %d\n", k);

	return (k);
}

int main(void)
{
	int (*ptr)(int, int) = &add;

	(*ptr)(20,200);
	return (0);
}
