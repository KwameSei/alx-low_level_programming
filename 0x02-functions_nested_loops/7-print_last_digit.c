#include "main.h"

/**
 *print_last_digit - checks for absolute value
 *@n: character to check
 *
 *Description: Prints last digits of numbers.
 *Return: d
 */

int print_last_digit(int n)
{
int d;

d = (n % 10);
if (d < 0)
{
d = (-1 * d);
}
_putchar(d + '0');

return (d);
}
