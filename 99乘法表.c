#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z =0;

    for(x=1 ; x <= 9 ; x++)
    {
        for(y=1; y<=9 ;y++)
        {
            z = x*y;
            printf("%d*%d=%d ",x,y,z);
        }

        printf("\n");
    }


    return 0;
}
