#include "main.h"

/**
 *Description: _lower - checks for lowercase letters
 *@c: character to check
 *
 *Return 0 or 1
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
