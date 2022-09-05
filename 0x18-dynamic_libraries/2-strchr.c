#include "main.h"

/**
 * _strchr - This function copies
 * the first n bytes of the memory area.
 *@s: connecting character 1
 *@c: connecting character 2
  * Return: 0.
 */

char *_strchr(char *s, char c)
{
int i = 0;
int j;

while (s[i])
{
i++;
}

for (j = 0; j <= i; j++)
{
if (c == s[j])
{
s += j;
return (s);
}
}
return ('\0');
}
