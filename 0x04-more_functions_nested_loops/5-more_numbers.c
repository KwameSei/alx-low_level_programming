#include "main.h"

/**
* more_numbers - This function prints
* Numbers from 0 to 14 ten times
*@n: connecting character
*@i: connecting character
* Return: void.
*/

void more_numbers(void)
{
int n;
int i;

for (n = 0; n < 10; n++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
