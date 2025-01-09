#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            cout<<i+1<<"\n";
            break;
        }
    }
}
