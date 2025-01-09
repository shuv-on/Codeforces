#include<stdio.h>
int main ()
{
    int a,h;
    scanf("%d %d",&a,&h);
    int arr[a];
    int count=0;
    for (int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]<h)
        {
            count++;
        }
        else
        {
            count+=2;
        }
    }
    printf("%d",count);
}
