#include "function_pointers.h"

/**
 * int_index - a function that searches for integers
 * @array: integer input array
 * @size: size of the array
 * @cmp: pointr to the function
 *
 * Return: index of the first element if the cmp function
 * does not return 0.or no elements matches
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int a;

if (size < 1 || array == NULL || cmp == NULL)
return (-1);

for (a = 0; a < size; a++)
{
if (cmp(array[a]))
return (a);
}

return (-1);
}
