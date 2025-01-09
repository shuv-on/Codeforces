#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str;
    int n,cnt=0;;
    cin>>n;
    cin>>str;
    for (int i=0;i<n;i++)
    {
        str[i]=tolower(str[i]);
    }
    sort(str.begin(),str.end());
    for (int i=0;i<n;i++)
    {
         if (str[i]!=str[i+1])
         {
            cnt++;
         }
    }
    if (cnt<26)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
        cout<<"YES"<<"\n";
    }
}
