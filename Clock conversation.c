#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[199];
        int arr[10];
        scanf("%s",str);
        int c=0;
        c=atoi(str);
        if(c>=1&&c<=12)
        {
            printf("%s AM\n",str);
        }

        else if(c==0)
        {
            str[0]='1';
            str[1]='2';
            printf("%s PM\n",str);
        }
        else
        {
            c=c-12;
            if(c<10)
            {

                str[1]=sprintf(str,"%d",c);
                printf("0%s PM\n",str);
            }
            else
            {
                int i=0;
                   while(c>0)
                   {
                        arr[i]=c%10;
                        c=c/10;
                        i++;
                   }
                   str[0]=arr[1];
                   str[1]=arr[0];
                   printf("%s PM\n",str);
            }

        }

    }
    return 0;
}
