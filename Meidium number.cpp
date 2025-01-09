#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (b>a&&b<c)
        {
            cout<<b<<"\n";
        }
        else if (a>b&&a<c)
        {
            cout<<a<<"\n";
        }
        else if (a<b&&a>c)
        {
            cout<<a<<"\n";
        }
        else if (c<a&&c>b)
        {
            cout<<c<<"\n";
        }
        else if (b>c&&b<a)
        {
            cout<<b<<"\n";
        }
        else if (c>a&&c<b)
        {
            cout<<c<<"\n";
        }

    }
    return 0;
}
