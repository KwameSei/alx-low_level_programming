#include "main.h"

/**
 * string_toupper - This function converts
 *lowercase string to uppercase
 *@str: connecting character 1
 * Return: 0.
 */
char *string_toupper(char *str)
{
int x;

for (x = 0; str[x] != '\0'; x++)
{
if (str[x] >= 'a' && str[x] <= 'z')
{
str[x] = str[x] - 32;
}
}
return (str);
}
