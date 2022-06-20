#include "main.h"

/**
 * _memset - This function fills
 * the first n bytes of the memory area.
 *@s: connecting character 1
 *@b: connecting character 2
 *@n: connecting character 3
 * Return: 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
