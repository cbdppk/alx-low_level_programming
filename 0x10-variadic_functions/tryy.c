#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints all arguments of various types with separator ', '
 * @format: list of types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
    va_list all;
    int i = 0, n;
    char c;
    float f;
    char *s;
    int first_printed = 0; // Flag to track if the first item has been printed

    va_start(all, format);

    while (format[i])
    {
        if (first_printed)
            printf(", "); // Print separator after the first item
        first_printed = 1;

        switch (format[i])
        {
            case 'c':
                c = va_arg(all, int);
                printf("%c", c);
                break;
            case 'i':
                n = va_arg(all, int);
                printf("%d", n);
                break;
            case 'f':
                f = va_arg(all, double); // float arguments are promoted to double
                printf("%f", f);
                break;
            case 's':
                s = va_arg(all, char *);
                if (s == NULL)
                    printf("(nil)");
                else
                    printf("%s", s);
                break;
            default:
                i++;
                continue;
        }

        i++;
    }

    printf("\n");
    va_end(all);
}

