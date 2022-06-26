#include "main.h"

/**
*_isalpha - checks for lowercase and uppercase letters
*@c: character to check
*
*Description: Prints 1 when certain conditions are met.
*Prints 0 if otherwise.
*Return: 0 or 1
*/

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
