#include<stdio.h>
#include<string.h>
int main ()
{
    char s[101];
    char t[100];
    scanf("%s",s);
    scanf("%s",t);
    int r;
    r=strcmp(t,strrev(s));
    if (r==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
