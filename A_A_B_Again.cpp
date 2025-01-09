#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int rem=0,sum=0;
        while(n>0){
            sum=(n%10)+sum;
            n/=10;
        }
        cout<<sum<<"\n";
    }
}