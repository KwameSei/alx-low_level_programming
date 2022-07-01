#include "main.h"
#include <stdlib.h>

/**
 * array_range - This function prints
 * the array of integers
 *@min: connecting member 1
 *@max: connecting member 2
 * Return: pointer.
 */

int *array_range(int min, int max)
{
int *ptr;
int a;

if (min > max)
return (NULL);

ptr = malloc(sizeof(*ptr) * ((max - min) + 1));

if (ptr == NULL)
return (NULL);

for (a = 0; min <= max; a++, min++)
ptr[a] = min;

return (ptr);
}
