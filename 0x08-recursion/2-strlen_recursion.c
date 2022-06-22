 #include "main.h"

/**
 * _strlen_recursion - This function prints
 * the length of recursive string
 *@s: connecting character 1
 * Return: 0.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
