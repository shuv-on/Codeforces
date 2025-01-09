#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	long long int n,k;cin>>n>>k;
	vector<ll> vec(n+1);
	vec[0]=0;
	for(ll i=1;i<=n;i++){
	    ll tmp;cin>>tmp;
	    vec[i]=vec[i-1]+tmp;
	}
	ll cnt=0;
	for(ll i=1;i<=n;i++){
	    for(ll j=i;j<=n;j++){
	        ll tmp=vec[j]-vec[i-1];
	        if(tmp==k)cnt++;
	    }
	}cout<<cnt<<"\n";

}
