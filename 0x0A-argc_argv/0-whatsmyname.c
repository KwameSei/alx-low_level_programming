#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - This function prints
 * the name of the executable file
 *@argc: connecting character 1
 *@argv: connecting character 2
 * Return: 0.
 */
int main(int argc, char *argv[])
{

if (argc)
{
printf("%s\n", argv[0]);
}

return (0);
}
