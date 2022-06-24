#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - This function prints
 * all arguments in the command line
 *@argc: connecting character 1
 *@argv: connecting character 2
 * Return: 0.
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
