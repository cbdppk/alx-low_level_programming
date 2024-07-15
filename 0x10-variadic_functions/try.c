#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int max(int a, ...)
{
	va_list args;

	va_start(args, a);

	int x = va_arg(args, int);

	printf("%d\n", x);

	va_end(args);

	return (0);
}

int main(void)
{
	max(2, 2, 9);

	return (0);
}
