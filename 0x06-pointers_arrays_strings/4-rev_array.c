#include "main.h"

/**
 * reverse_array - This function prints
 * the reverse order
 *@a: connecting parameter 1
 *@n: connecting parameter 2
 */
void reverse_array(int *a, int n)
{
int x, y;

for (x = 0; x < n / 2; x++)
{
y = a[x];
a[x] = a[n - 1 - x];
a[n - 1 - x] = y;
}
}
