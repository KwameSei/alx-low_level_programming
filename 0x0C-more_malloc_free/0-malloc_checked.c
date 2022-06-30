#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This function allocates memory
 *@b: integer input
 * Return: pointer.
 */

void *malloc_checked(unsigned int b)
{
char *p;

p = malloc(b);
if (p == NULL)
{
exit(98);
}

return (p);
}
