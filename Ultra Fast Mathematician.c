#include<stdio.h>
#include<string.h>
int main ()
{
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    int n=strlen(a);
    int i;
    for (i=0;i<n;i++)
    {
            if (a[i]==b[i])
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
    }
    return 0;

}
