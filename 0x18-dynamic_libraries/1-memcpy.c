#include "main.h"

/**
 * _memcpy - This function copies
 * the first n bytes of the memory area.
 *@dest: connecting character 1
 *@src: connecting character 2
 *@n: connecting character 3
 * Return: 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
/* dest[i] = src[i] */
}
return (dest);
}
