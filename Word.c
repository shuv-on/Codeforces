#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100];
    scanf("%s",str);
    int upr=0,lwr=0;
    for (int i=0;i<strlen(str);i++)
    {
        if (str[i]>='A'&&str[i]<='Z')
        {
            upr++;
        }
        else
        {
            lwr++;
        }
    }
    if (upr>lwr)
    {
        printf("%s\n",strupr(str));
    }
    if (upr<lwr)
    {
        printf("%s\n",strlwr(str));
    }
    if (upr==lwr)
    {
        printf("%s\n",strlwr(str));
    }
    return 0;
}
