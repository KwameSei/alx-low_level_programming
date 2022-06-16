#include "main.h"

/**
 * _strcmp - This function
 * compares two strings
 *@s1: connecting parameter 1
 *@s2: connecting parameter 2
 * Return: 0.
 */
int _strcmp(char *s1, char *s2)
{
int a = 0;

while (s1[a] == s2[a])
{
if (s1[a] == '\0' || s2[a] == '\0')
break;
a++;
}

if (s1[a] == '\0' && s2[a] == '\0')
return (0);
else if (s2[a] > s1[a])
return (-15);
else
return (15);
}
