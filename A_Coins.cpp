#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,s; cin >> n >> s;
    ll ans=s/n;
    if(s%n==0){
     cout<<ans<<'\n';
     }
    else {
    ans++;
    cout<<ans<<'\n';
    }
}