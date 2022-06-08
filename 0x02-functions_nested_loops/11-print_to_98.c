#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - Printing natural numbers
 *@n: 1st integer
 *
 *Description: natural numbers.
 *Return: void
 */

void print_to_98(int n)
{
while (n != 89)
{
printf("%d, ", n);
if (n > 98)
n--;
else
n++;
}
printf("98\n");
}
