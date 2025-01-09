#include<iostream>
using namespace std;
int main ()
{
    int n,ans=0;
    int ar[]={100,20,10,5,1};
    cin>>n;
    for (int i=0;i<5;i++)
    {
        ans=ans+n/ar[i];
        n=n%ar[i];
    }
    cout<<ans<<"\n";
}
