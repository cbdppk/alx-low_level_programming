#include <stdio.h>

int added(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}

int main(void)
{
	int (*ptr)(int, int) = added;

	printf("%d\n", ptr(10, 20));

	return (0);
}


