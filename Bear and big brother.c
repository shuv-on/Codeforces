#include<stdio.h>
int main ()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    int count=0;
    for (i=1;i<=100;i++)
    {
        a=3*a;
        b=2*b;
        if(a>b)
        {
            break;
        }
    }
    printf("%d",i);
    return 0;
}

