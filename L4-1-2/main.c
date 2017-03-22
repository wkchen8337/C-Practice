#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   char i ,j;
   scanf("%c %c",&i,&j);

   while (i <= j)
    {
      printf("  %c",i);
      i++;
    }

   return 0;
}
