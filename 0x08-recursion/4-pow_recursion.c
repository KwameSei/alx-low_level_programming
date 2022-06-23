#include "main.h"
#include <math.h>

/**
 * _pow_recursion - This function prints
 * the exponent of a number
 *@x: connecting character 1
 *@y: connecting character 2
 * Return: 0.
 */
int _pow_recursion(int x, int y)
{

if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else if (y == 1)
{
return (x);
}
else
{
return (_pow_recursion(x, y - 1) * x);
}
}
