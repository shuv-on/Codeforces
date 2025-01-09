#include<stdio.h>
int main ()
{
    int k=1,n,t;

    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        int count=0;
        int j=0;
        int arr[1000];
        while (n!= 0)
        {

            arr[j]=(n%10)*k;
            n/= 10;
            k=k*10;
            j++;
            count++;
        }

        printf("%d",count);
    }
}
