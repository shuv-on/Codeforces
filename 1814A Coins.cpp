#include<iostream>
using namespace std;
#define ll long long int
int main ()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        if(n%2==1 and k%2==0)
        {
            cout<<"No"<<"\n";
        }
        else{
            cout<<"Yes"<<"\n";
        }
    }
}
