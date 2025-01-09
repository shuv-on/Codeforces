#include<stdio.h>
#include<math.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            printf("%d\n",ceil(a/b));
        }
        else
        {
            printf("%d\n",ceil(b/a));
        }

    }

}
