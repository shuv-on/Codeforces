#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main ()
{
    string str;
    cin>>str;
    int count=0;
    sort(str.begin(),str.end());
    for (int i=0;i<str.size();i++)
    {
        if (str[i]!=str[i+1])
        {
            count++;
        }
    }
    if (count%2==0)
    {
        cout<<"CHAT WITH HER!"<<"\n";
    }
    else
    {
        cout<<"IGNORE HIM!"<<"\n";
    }
    return 0;
}
