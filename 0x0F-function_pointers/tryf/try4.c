include <stdio.h>

void fun1()
{
	printf("Function 1 passed\n");
}
void fun2()
{
	printf("Fucntion 2 passed\n");
}

void wrapper(void (*ptr)())
{
	ptr();
}

int main()
{
	wrapper(fun1);
	wrapper(fun2);
	return(0);
}
