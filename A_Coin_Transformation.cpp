#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>> n;
        ll count=0;
        if(n<=3){
            cout<<n<<"\n";
        }else {
            while(n>3){
                n=floor(n/4);
                count++;
            }
        }
        cout<<count*2<<'\n';
    }
}