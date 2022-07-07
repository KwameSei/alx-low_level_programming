#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - function that prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;
char *x;

separator = (separator != NULL) ? separator : "";

va_start(list, n);
for (i = 0; i < n; i++)
{
if (i > 0)
{
printf("%s", separator);
}
x = va_arg(list, char *);
if (x == NULL)
{
printf("(nill)");
}
else
{
printf("%s", x);
}
}
va_end(list);
putchar(10);
}
