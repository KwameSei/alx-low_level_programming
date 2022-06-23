#include "main.h"

/**
 * factorial - This function prints
 * the factors of a given number.
 *@n: connecting character 1
 * Return: 0.
 */

int factorial(int n)
{

if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n = n * factorial(n - 1));
}
return (0);
}
