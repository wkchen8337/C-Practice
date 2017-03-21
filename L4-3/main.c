#include <stdio.h>
#include <stdlib.h>

// decimal to binary

int main()
{
    int a[32];
    int i;
    int x;

    scanf("%d",&x);
    i = 0;
    while(x>0)
    {
        a[i] = x%2;
        i = i+1;
        x = x / 2;
    }

    i = i -1;

    while (i >= 0)
    {
        printf("%d",a[i]);
        i = i -1;
    }


    return 0;
}
