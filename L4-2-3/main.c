#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 5;

    while ( i < 10)
    {
        printf("%d ",(i<10));
        printf("%d\n",i);
        i = i + 1;
    }

    printf("%d %d\n",(i<10),i);

    return 0;
}
