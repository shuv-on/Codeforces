#include<stdio.h>
int main ()
{
    int a,b,c,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if (a+b==c||b+c==a||c+a==b)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
