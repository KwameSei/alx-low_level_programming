#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - Entry point
 *@s1: string number 1
 *@s2: string number 2
 *Return: concatenating string
 */

char *str_concat(char *s1, char *s2)
{
char *str;
unsigned int a, b, c, limit;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (a = 0; s1[a] != '\0'; a++)
;

for (b = 0; s2[b] != '\0'; b++)
;

str = malloc(sizeof(char) * (a + b + 1));

if (str == NULL)
{
free(str);
return (NULL);
}

for (c = 0; c < a; c++)
str[c] = s1[c];

limit = b;
for (b = 0; b <= limit; c++, b++)
str[c] = s2[b];

return (str);
}
