#include "main.h"

/**
 * _strcpy - This function prints
 * copies of strings
 *@dest: connecting param 1
 *@src: connecting param 2
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (*(src + i))
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';

return (dest);
}
