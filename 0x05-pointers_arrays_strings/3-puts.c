#include "main.h"
#include <string.h>

/**
 * _strlen - This function prints
 * the length of a string
 *@s: connecting character 1
 * Return: i.
 */

void _puts(char *str)
{
  int i = 0;

  while (*(str + i))
    {
      _putchar(*(str + i));
	i++;
    }
  _putchar('\n');
}
