#include<bits/stdc++.h>
#include<string>
using namespace std;
int main ()
{
    string str;
    int n;
    cin>>n;
    cin>>str;
    int contA=0,contD=0;
    contA=count(str.begin(),str.end(),'A');
    contD=count(str.begin(),str.end(),'D');
    if (contA>contD)
    {
        cout<<"Anton"<<endl;
    }
    else if (contA<contD)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}

