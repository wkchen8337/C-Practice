#include <stdio.h>
#include <stdlib.h>

int check(int v)
{
    if (v)
    {
        printf("TRUE");
    }

    else
    {
        printf("false");
    }
}


int main(void)
{
    int x = 5;
    int y = 3;

    check(x>2 && y ==3);


    return 0;
}
