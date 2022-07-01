#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - This function concatenates two strings
 *@s1: connecting character 1
 *@s2: connecting character 2
 *@n: connecting character 3
 * Return: char.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int size = 0, size1 = 0, a;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[size] != '\0')
{
size++;
}

while (s2[size1] != '\0')
{
size1++;
}

if (n > size1)
n = size1;
p = malloc((size + n + 1) * sizeof(char));
if (p == NULL)
return (0);

for (a = 0; a < size; a++)
{
p[a] = s1[a];
}

for (; a < (size + n); a++)
{
p[a] = s2[a - size];
}
p[a] = '\0';

return (p);
}
