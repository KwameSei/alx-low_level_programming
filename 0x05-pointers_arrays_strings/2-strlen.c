#include "main.h"
#include <string.h>

/**
 * mul - This function prints
 * Multiplies two numbers
 *@a: connecting character 1
 *@b: connecting character 2
 * Return: 0.
 */

int _strlen(char *s)
{
  int i = 0;

  while (*(s + i))
    i++;

  return (i);
}
