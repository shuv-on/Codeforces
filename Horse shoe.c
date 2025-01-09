#include<stdio.h>
int main ()
{
    int a,b,c,d;
    int count=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a!=b&&a!=c&&a!=d)
    {
        count++;
    }
    if(b!=c&&b!=d&&b!=a)
    {
        count++;
    }
    if(c!=d&&c!=a&&c!=b)
    {
        count++;
    }
    int ans=4-count;
    printf("%d",ans);
    return 0;
}
