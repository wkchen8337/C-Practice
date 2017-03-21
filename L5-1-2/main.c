#include <stdio.h>
#include <stdlib.h>

/*8
5 10 15 20 25 30 35 40
*/


int main()
{
    int a[50];
    int n,i,x,sum;
    freopen("testcase.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    for( i=0,sum=0 ; i<n ; i++)
    {
            sum = sum +a[i];
    }

    printf("total = %d",sum);

    return 0;
}
