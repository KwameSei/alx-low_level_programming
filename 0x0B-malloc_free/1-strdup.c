#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - Entry point
 *@str: size of the array
 *Return: copied string
 */

char *_strdup(char *str)
{
char *str2;
unsigned int a, b;

if (str == NULL)
return (NULL);

for (a = 0; str[a] != '\0'; a++)
;

str2 = (char *)malloc(sizeof(char) * (a + 1));

if (str2 == NULL)
return (NULL);

for (b = 0; b <= a; b++)
str2[b] = str[b];

return (str2);
}
