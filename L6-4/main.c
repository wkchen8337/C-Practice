/*
Description

Convert a decimal integer into its binary representation.
For each bit in the binary representation, flip it if its left bit is 1 and keep it unchanged if its left bit is 0.
The leftmost bit should refer to the rightmost bit and uses the same rule to decide if it needs to flip.

Example:

11 -> 1011

1011 -> 0110

Input

The input consists of an integer N (2 <= N <= 1024)

Output

The binary representation of N and the result of flipping. Note that you do not need to print ‘\n’ at the end of the output.

Sample Input

11
Sample Output

1011 0110

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0 , n=0, ori_n=0, c=0;

    scanf("%d", &n); //讀入數字11
    ori_n = n; //把n先存起來

    i = 1;
    while (i<=n) i = i*2;//i一直乘2，直到超過11就停 n = 16
    i = i/2; //16超過了! 所以除2，讓他變成8
    while(i>0)
    {
        printf("%d",n/i);
        n = n%i; //n除i的餘數
        i = i/2;
    }
    printf(" "); //多印一個空格，開始翻轉

    //////開始翻轉///////////

    n = ori_n; //把n存回來
    i=1;
    c = n%2; //判斷輸入的數是否為奇數

    while (i<=n) i=i*2;
    i = i/2;

    while(i>0)
    {
        printf("%d", ( c + n/i)%2 ); //c是0，結果跟上面相同
        c = n/i;
        n = n%i; //n除i的餘數
        i = i/2;
    }

    return 0;
}
