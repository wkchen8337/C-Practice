#include <stdio.h>
#include <string.h>

int main()
{
   char str[1000]; //字元陣列
   int i, j;

   scanf("%s", str);
   i = 0;
   j = strlen(str) - 1;  // i,J 初始位置

   while (i < j)
    {
        if(str[i] == str[j])
        {
            i++;
            j--;
        }
        else
        {
            break;
        }
    }

   if (i < j)  //利用i j關系 判對字串是否為對稱
      printf("Not a palindrome.\n");
   else
      printf("Palindrome!\n");

   return 0;
}
