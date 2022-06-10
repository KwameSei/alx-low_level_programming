#include "main.h"

/**
* print_most_numbers - This function prints
* Numbers from 0 to 9 excerpt 2 and 4
* Return: 0.
*/

void print_most_numbers(void)
{
int n;

for (n = '0'; n <= '9'; n++)
{
if (n == '2' || n == '4')
{
continue;
}
else
{
_putchar(n);
}
}
_putchar('\n');
}
