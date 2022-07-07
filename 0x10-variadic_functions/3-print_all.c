#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
va_list list;
int i = 0;
char *j;
char *sep = ", ";

va_start(list, format);

while ((format != NULL) && *(format + i) != '\0')
{
switch (*(format + i))
{
case 's': /*string*/
j = va_arg(list, char *);
j = (j != NULL) ? j : "(nil)";
printf("%s", j);
break;
case 'i': /* int */
printf("%i", va_arg(list, int));
break;
case 'c': /* char */
printf("%c", va_arg(list, int));
break;
case 'f': /* float */
printf("%f", va_arg(list, double));
break;
default:
i++;
continue;
}
if (*(format + i + 1) != 0)
{
printf("%s", sep);
}
i++;
}
putchar(10);
va_end(list);
}
