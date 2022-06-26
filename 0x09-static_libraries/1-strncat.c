#include "main.h"
#include <string.h>

/**
 * _strncat - This function concatenates
 * two strings
 *@dest: connecting parameter 1
 *@src: connecting parameter 2
 *@n: connectiong parameter 3
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int dest_len = strlen(dest);
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';

return (dest);
}
