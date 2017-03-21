#include <stdio.h>

int main(void)
{
   int num;
   int sum = 0L;
   int status;

   printf("Please enter an integer to be summed ");
   printf("(q to quit): ");
   status = scanf("%d", &num);
   printf("status: %d\n",status);


   while (status == 1)
    {        /* == means "is equal to" */
      sum = sum + num;
      printf("Please enter next integer (q to quit): ");
      status = scanf("%d", &num);
      printf("status: %d\n",status);
    }
   printf("Those integers sum to %d.\n", sum);

   return 0;
}
