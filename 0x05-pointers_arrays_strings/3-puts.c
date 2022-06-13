#include "main.h"
#include <string.h>

/**
 * _puts - This function prints
 * a string
 *@s: connecting character 1
 * Return: i.
 */

void _puts(char *str)
{
int i = 0;

while (*(str + i))
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
