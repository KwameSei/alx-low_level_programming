#include "main.h"

/**
 * _strspn - This function gives
 * the length of a prefix substring.
 *@s: connecting character 1
 *@accept: connecting character 2
 * Return: 0.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j, k = 0;

while (accept[i])
{
j = 0;

while (s[j] != 32)
{
if (accept[i] == s[j])
{
k++;
}
j++;
}
i++;
}
return (k);
}
