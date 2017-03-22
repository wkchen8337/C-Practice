#include <stdio.h>
#include <stdlib.h>

int check(int v)
{
    if (v)
    {
        printf("true\n");
    }

    else
    {
        printf("false\n");
    }

    return v;
}


int main(void)
{
    int x = 5;
    int y = 3;

    check(x>2 && y ==3);  // true
    check(!(x <2 || y==3)); //false
    check(x != 0 &&  y); // true "y«D0"

    return 0;
}
