#include<stdio.h>
int main ()
{
    int n,k,i,temp;
    int count=0;
    int num[1000];
    scanf("%d %d",&n,&k);
    for (i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    k=k-1;
    for (i=0; i<n; i++)
    {
        if (num[i]>=num[k]&&num[i]>0)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
