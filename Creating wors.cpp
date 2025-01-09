#include<iostream>
using namespace std;
int main()
{
    string a,b;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<b[0]<<a[1]<<a[2]<<" ";
        cout<<a[0]<<b[1]<<b[2]<<"\n";
    }
    return 0;
}
