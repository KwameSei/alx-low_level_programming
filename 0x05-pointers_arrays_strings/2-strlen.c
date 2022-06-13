#include "main.h"
#include <string.h>

/**
 * _strlen - This function prints
 * the length of a string
 *@s: connecting character 1
 * Return: i.
 */

int _strlen(char *s)
{
int i = 0;

while (*(s + i))
i++;

return (i);
}
