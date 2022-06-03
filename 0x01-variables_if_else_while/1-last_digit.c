#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int n;
int lastNum;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastNum = n % 10;

if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
}
else if
(n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, lastNum);
}

return (0);
}
