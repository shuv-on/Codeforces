#include<bits/stdc++.h>
#include<string>
using namespace std;
int main ()
{
    string str;
    int cnt=0;
    getline(cin,str);
    sort(str.begin(),str.end());
    for (int i=0; i<str.size(); i++)
    {
        if (str[i]>='a'&&str[i]<='z')
        {
            if (str[i]!=str[i+1])
            {
                cnt++;
            }
        }

    }
    cout<<cnt<<"\n";
}
