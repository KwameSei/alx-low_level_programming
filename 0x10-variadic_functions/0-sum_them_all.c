#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments passed
 *
 * @n: number of arguments
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list ap;


va_start(ap, n);
for (i = 0, sum = 0; i < n; i++)
{
sum += va_arg(ap, int);
}

va_end(ap);
return (sum);
}
