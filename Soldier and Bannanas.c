#include<stdio.h>
int main ()
{
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int sum=0,borrow,total;
    sum=(w*(w+1))/2;
    total=sum*k;
    borrow=total-n;
    if(borrow<0)
    {
        printf("0");
    }
    else
    {
        printf("%d\n",borrow);
    }
    return 0;
}
