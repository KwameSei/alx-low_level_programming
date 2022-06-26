#include "main.h"

/**
*_abs - checks for absolute value
*@n: character to check
*
*Description: Prints n absolute number.
*Return: n
*/

int _abs(int n)
{
if (n >= 0)
return (n);
else
{
n *= -1;
return (n);
}
}
