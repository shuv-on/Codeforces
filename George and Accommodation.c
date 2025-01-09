#include<stdio.h>
int main ()
{
    int t,count=0;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if((b-a)>=2)
        {
           count++;
        }
    }
    printf("%d",count);
    return 0;
}
