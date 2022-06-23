#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - This function prints
 * Multiplies two numbers
 *@s: connecting character 1
 * Return: 0.
 */

void _puts_recursion(char *s)
{
if (*s == '\0') /* null character */
_putchar('\n');
return;
_putchar(*s);
_puts_recursion(++s);
}
