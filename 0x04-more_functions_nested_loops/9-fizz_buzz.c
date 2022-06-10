#include "main.h"
#include <stdio.h>

/**
* main - This function prints
* Fizz Buzz game
*@n: connecting character 1
* Return: 0.
*/
int main(void)
{
int n;

for (n = 1; n <= 100; n++)
{
if ((n % 3 == 0) && (n % 5 == 0))
{
printf("FizzBuzz ");
}
if (n % 3 == 0)
{
printf("Fizz ");
}
else if (n % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", n);
}
}
printf("\n");

return (0);
}
