#include "main.h"

/**
 * _strstr - This function locates
 * a substring
 *@haystack: connecting character 1
 *@needle: connecting character 2
 * Return: 0.
 */

char *_strstr(char *haystack, char *needle)
{
int a = 0, b = 0;

while (haystack[a])
{
while (needle[b])
{
if (haystack[a + b] != needle[b])
{
break;
}
b++;
}
if (needle[b] == '\0')
{
return (haystack + a);
}
a++;
}
return ('\0');
}
