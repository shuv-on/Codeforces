#include<bits/stdc++.h>
#include<string>
#include<stdlib.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string str;
        int arr[10];
        cin>>str;
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
                str[1]=sprintf(str,"%d",c);
                printf("%s PM\n",str);
            }

        }

    }
    return 0;
}
