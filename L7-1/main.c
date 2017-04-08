/*
10768 - wave

Description
A character wave consistss of lines of characters, which has a parameter, length L.  The number of characters in the first line is 1, and is increased by one in the every following lines.  After the number of character reaches L, it starts to descrease until the number of characters become 1 again.  For example, the following is a character wave of length 3.

#
##
###
##
#

Print out N character waves consequtively.  Each wave is built by the character C and the length is L.

Input
There are three inputs, separated by a space.  The first one is a character C; the second one and the third one are integers, specifying the length L and the number of waves N to print.

Output
Print out N waves consisting of character C and of length L.
Note that you do not need to print ‘\n’ at the end of the output.
Sample Input
# 5 3

Sample Output
#
##
###
####
#####
####
###
##
#
##
###
####
#####
####
###
##
#
##
###
####
#####
####
###
##
#

*/
#include <stdio.h>
#include <stdlib.h>

void triangle(char ch,int m)
{
    int i,j;

    for (i=1 ; i<=m-1 ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }



    for (i=m; i>=2; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }

}

int main(void)
{
    char ch;
    int M=0,N=0,i;
    scanf("%c%d%d",&ch,&M,&N);

    if(M==1)                        //對應# 1 N的情況
    {
        for(i=0; i<N-1;i++)         //故意讓字元少印一個，因為最後一定會補一個
        {
            printf("%c\n",ch);
        }

    }
    else
    {
        for(i=0; i<N; i++)
        {
            triangle(ch,M);
        }
    }

    if(M>0 && N>0)
        {
            printf("%c",ch);
        }

    return 0;
}
