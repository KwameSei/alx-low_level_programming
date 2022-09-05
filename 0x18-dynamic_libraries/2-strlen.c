#include "main.h"
#include <string.h>

/**
 * _strlen - This function prints
 * the length of a string
 *@s: connecting character 1
 * Return: Length.
 */

int _strlen(char *s)
{
int len = 0;

while (*s++)
len++;

return (len);
}
