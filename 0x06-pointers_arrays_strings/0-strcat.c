#include "main.h"
#include <string.h>

/**
 * _strcat - This function concatenates
 * two strings
 *@dest: connecting parameter 1
 *@src: connecting parameter 2
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
char *ptr = dest + strlen(dest);

while (*src != '\0')
{
*ptr++ = *src++;
}

*ptr = '\n';
 
return (dest);
}
