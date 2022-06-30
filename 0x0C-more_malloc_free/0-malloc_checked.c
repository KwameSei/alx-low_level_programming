#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This function allocates memory
 *@b: integer input
 * Return: pointer.
 */

void *malloc_checked(unsigned int b)
{
char *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
exit(0);
}
return (ptr);
}
