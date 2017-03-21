#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("testcase.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a[6][6] = {0};

    int i ,j;
    a[1][1] = 1;

    for(i=2;i<6;i++)
    {
        for(j=1;j<=i;j++)
        {
            a[i][j] = a[i-1][j-1] + a[i-1][j] ;
        }
    }

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%3d",a[i][j]);
        }

        printf("\n");
    }


    return 0;
}


/* output:

   0 0 0 0 0 0
   0 1 0 0 0 0
   0 1 1 0 0 0
   0 1 2 1 0 0
   0 1 3 3 1 0
   0 1 4 6 4 1 */
