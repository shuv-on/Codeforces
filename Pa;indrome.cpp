#include<bits/stdc++.h>
#include<string>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str,rstr;
        cin>>str;
        rstr=str;
        reverse(str.begin(),str.end());

        if (rstr==str)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }

    }
    return 0;
}
