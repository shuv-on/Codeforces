#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a%5==0)
    {
        printf("%d\n",a/5);
    }
    else
    {
        printf("%d\n",(a/5)+1);
    }
    return 0;
}
