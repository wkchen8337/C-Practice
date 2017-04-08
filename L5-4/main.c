/*
W07_02
輸入一個正整數
程式必須列出除了 1 和該正整數本身以外的全部因數
因數必須從小到大排列
如果無法因數分解
則成是必須顯示這個正整數是質數
*/
#include <stdio.h>

int main(void)
{
   int num, div;
   int isPrime;

   printf("Please enter an integer (q to quit): \n");
    //scanf("%d",&num);

   while(scanf("%d",&num) == 1) // 輸入的值是整數
   {
        isPrime = 1;
        for(div=2; div < num; div++)
        {
                if(num%div == 0) //輸入的數可以被div整除
                {
                    printf("%d, ",div);
                    isPrime = 0; // 發現因數了
                }
        }

        /*for(; div*div >= 2; div--)
        {
                if(num%div == 0) //輸入的數可以被div整除
                {
                    printf("%d, ",num/div);
                }
        } */






        if(isPrime == 1)
        printf("%d is prime number.\n", num);
        else
        printf("\b\b are divisors of %d\n", num);

   }

   return 0;
}
