#include<bits/stdc++.h>
#include<string>
using namespace std;
int main ()
{
    string str;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>str;
        for(int i=0;i<size(str);i++)
        {
            if (str.find("it") != std::string::npos)//npos
            {
                cout<<"YES"<<"\n";
                break;
            }
            else
            {
                cout<<"NO"<<"\n";
                break;
            }
        }
    }
}
