#include<stdio.h>
#include<math.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        double a;
        scanf("%lf",&a);
        long long int ans=0;
        scanf("%lld",&a);
        ans=ceil((a/2)-1);
        printf("%lld\n",ans);
    }
}
