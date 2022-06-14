#include "main.h"
#include <stdio.h>

/**
 * print_array - This function prints
 * the nth number of elements in an array
 *@a: connecting character 1
 *@n: connecting character 2
 * Return: 0.
 */

void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
printf("%d", a[i]);

if (i < (n - 1))

printf(", ");
i++;
	}
printf("\n");
}
