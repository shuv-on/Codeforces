#include<stdio.h>
int main ()
{
    int t,sum=0;
    scanf("%d",&t);
    while (t--)
    {
        int a;
        scanf("%d",&a);
        sum=sum+a;
    }
    if (sum>=1)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }
    return 0;
}
