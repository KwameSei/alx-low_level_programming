#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - This function prints the results of
 * two multiplied arguments to the command line
 *@argc: connecting character 1
 *@argv: connecting character 2
 * Return: 0.
 */

int main(int argc, char *argv[])
{
int i, j, result;

if (argc != 3)
{
printf("Error\n");
return (1);
}

/* Getting vlaues */
i = atoi(argv[1]);
j = atoi(argv[2]);

result = i *j;
printf("%d\n", result);

return (0);
}
