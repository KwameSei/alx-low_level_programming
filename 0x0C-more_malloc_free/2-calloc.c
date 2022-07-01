#include "main.h"
#include <stdlib.h>

/**
 *_calloc - This function allocates memory for array
 *@nmemb: connecting member 1
 *@size: connecting member 2
 * Return: char.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(nmemb * size);

if (p == NULL)
return (NULL);

for (i = 0; i < (nmemb = size); i++)
p[i] = 0;

return (p);
}
