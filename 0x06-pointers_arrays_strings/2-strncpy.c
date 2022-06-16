#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - This function concatenates
 * two strings
 *@dest: connecting parameter 1
 *@src: connecting parameter 2
 *@n: connectiong parameter 3
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
int a;

for (a = 0; a < n && src[a] != '\0'; a++)
{
dest[a] = src[a];
}

for (; a < n; a++)
{
dest[a] = '\0';
}

return (dest);
}
