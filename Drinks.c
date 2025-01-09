#include<stdio.h>
#include<math.h>
int main ()
{
    int i,n;
    double result=0.0,sum=0.0;
    scanf("%d",&n);
    double drink[100];
    for(i=0; i<n; i++)
    {
        scanf("%lf",&drink[i]);
        sum=sum+drink[i];
    }
    result=sum/n;
    printf("%.12lf",result);
    return 0;
}
