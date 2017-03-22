#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int i=0;
    int I=0;
    int sum = 0;
    double avg = 0;

    do
    {
        scanf("%d",&a);
        if (a!=-1)
        {
            sum+=a;
        }
        if (a>b && a>c)
        {
            c=a;
            I=i+1;
        }
        b=a;
        //printf("%d\n",a);
        i+=1;
    }
    while(a!=-1);
    avg=(double)(sum)/(i-1);
    printf("%d\n",sum);
    printf("%.1f\n",avg);
    printf("%d\n",c);
    printf("%d",I);
    return 0;
}

