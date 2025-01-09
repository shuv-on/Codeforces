#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str;
    int count=0;
    cin>>str;
    for(int i=1; i<str.size(); i++)
    {
        if(str[i]==str[i-1])
        {
            count++;
            if (count==6)
            {
                break;
            }
        }
        else
        {
            count=0;
        }

    }
    if (count==6)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }

    return 0;

}
