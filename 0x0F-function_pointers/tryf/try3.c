#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
	int k;

	k = a + b;

	printf("\nthe value of adding %d and %d is %d\n", a, b, k);

	return (k);
}

int subtract(int a, int b)
{
	int k;

	k = a - b;

	printf("\nthe value of subtracting %d from %d is %d\n", b, a, k);

	return (k);
}

int divide(int a, int b)
{
	double k;

	k = a / b;
	
	printf("\nthe value after dividing %d by %d is %f\n", a, b, k);
	return (0);
}

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	int (*maths[])(int, int) = {add, subtract, divide};

	while (1)
	{
		printf("choose one\n----\n1.Add \n2.Subtract \n3.Divide.\n 4.Exit.\n ----");
		scanf("%d", &a);
		if (a == 4)
			exit(0);
		printf("Type the numbers ----\n");
		printf("Number 1 ->  ");
		scanf("%d", &b);
		printf("\nNumber 2 -> ");
		scanf("%d", &c);

		if (a < 1 || a > 4)
		{
			perror("\nType a number between 1 to 3\n");
		}
		else if (!a)
			perror("\ntype a number !!!\n");
		else if (a == 1)
		{
			(*maths[a - 1])(b, c);
		}
		else if (a == 2)
		{
			(*maths[a - 1])(b, c);
		}
		else if (a == 3)
		{
			(*maths[a - 1])(b, c);
		}
		else if (a == 4)
		{
			exit(0);
		}
		else
		{
			exit(1);
		}
	}
	
	return (0);
}


