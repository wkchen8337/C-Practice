#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, j;
    int a[10][10] = {0};

    a[1][1] = 1;

    i = 2;
    while (i<=5)
    {
        j = 1;
        while (j<=5)
        {
            a[i][j] = a[i-1][j-1]+a[i-1][j]; /* a[i][j] ith row, jth column */
            j = j + 1;
        }
        i = i + 1;
    }

    /* show the content of a */
    i = 0;
    while (i<=5)
    {
        j = 0;
        while (j<=5)
        {
            printf("%2d ", a[i][j]);
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }

    return 0;
}
/*
How to print a Pascal Triangle?
Try it yourself.
0 0 0 0 0 0
0 1 0 0 0 0
0 1 1 0 0 0
0 1 2 1 0 0
0 1 3 3 1 0
0 1 4 6 4 1
...
*/
