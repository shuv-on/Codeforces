#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    ll n; cin >> n;
    vi vec(n); t_in (vec);
    ll max_sum=-1e18;
    ll current_sum=-1e18;
    for(ll i=0;i<n;i++){
        current_sum=max(current_sum+vec[i],vec[i]);
        max_sum=max(max_sum,current_sum);
    }
    cout<<max_sum<<'\n';
}