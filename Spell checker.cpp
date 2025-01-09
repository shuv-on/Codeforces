#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str;
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cin>>str;
        sort(str.begin(),str.end());
        if(str=="Timru")
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}
