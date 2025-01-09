#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str;
    int n,count=0;
    cin>>n;
    cin>>str;
    for (int i=0;i<str.size();i++)
    {
        if (str[i]==str[i+1])
        {
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}
