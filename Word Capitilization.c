#include<stdio.h>
#include<string.h>
int main ()
{
    char str[1001];
    scanf("%s",str);
    	if(str[0]>='a'&&str[0]<='z')
	{
		printf("%c",str[0]-32);
	}
	else
	{
        printf("%c",str[0]);
	}
	for (int i=1;i<strlen(str);i++)
	{
        printf("%c",str[i]);
	}
	return 0;
}
