#include "main.h"

/**
 * _strpbrk - This function searches
 * and prints a string for any set of bytes
 *@s: connecting character 1
 *@accept: connecting character 2
 * Return: s.
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0, j;

while (s[i])
{
j = 0;

while (accept[j])
{
if (s[i] == accept[j])
{
s += i;
return (s);
}
j++;
}
i++;
}
return ('\0');
}
