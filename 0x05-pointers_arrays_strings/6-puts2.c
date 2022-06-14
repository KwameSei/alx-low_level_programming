#include "main.h"

/**
 * puts2 - This function prints
 * iterates by 2
 *@str: connecting character 1
 * Return: 0.
 */

void puts2(char *str)
{
int i, j = 0;

while (str[j] != '\0')
{
j++;
}

for (i = 0; i < j; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
