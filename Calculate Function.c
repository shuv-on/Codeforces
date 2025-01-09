#include<stdio.h>
int main ()
{
    long long int num,sum;
    scanf("%lld",&num);
    if (num>=1)
    {
        if (num%2==0)
        {
            sum=num/2;
        }
        else
        {
            sum=num/2;
            sum=sum-num;
        }
    }
    printf("%lld",sum);
    return 0;
}
