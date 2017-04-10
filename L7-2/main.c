/*
10769 - Two-dimensional array rotation

Description
Given an NxN two-dimensional array M, you are asked to rotate M clockwise by 45 degrees and print out the content of M.

Consider the following 2D array:
1 2 3
4 5 6
7 8 9

After being rotated 45 degrees clockwise, it will become:
    1
  4   2
7   5   3
  8   6
    9

In this case, you should print:

1
4 2
7 5 3
8 6
9



Input
The first line has N (2<=N<=20), which means the size of the 2D array. The total number of elements in the 2D array is thus N x N.

For the next N lines, each contains N integers, specifying the elements of the 2D array. All of the integers in the same line are separated by a space.

Output
Print out all elements of the rotated 2D array row-by-row.

All of the integers in the same line are separated by a space, and there is a '\n' at the end of each line.

Sample Input
3
1 2 3
4 5 6
7 8 9

Sample Output
1
4 2
7 5 3
8 6
9
*/
#include <stdio.h>
#include <stdlib.h>

int A[2000][2000];

int main(void)
{
    int i,j;
    int N;
    scanf("%d",&N); // N*N MATRIX

    for(i=0 ; i<N ; i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for(i=0 ; i<N ; i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
