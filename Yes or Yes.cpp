#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>str;
        if ((str[0]=='y' or str[0]=='Y') and (str[1]=='e' or str[1]=='E') and (str[2]=='s' or str[2]=='S'))
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}
