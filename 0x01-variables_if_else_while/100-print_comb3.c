#include <stdlib.h>
#include <stdio.h>

int main(void)
{
int c;
 int i;
 for (c = '0'; c <= '9'; c++)
   {
     for (i = '0'; c <= '9'; c++)
       {
	 if (c < i)
	   {
	 putchar(c);
	 putchar(i);
	   }
       } 
   }
 return (0);
}
