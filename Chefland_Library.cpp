#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define t_in(a) for(auto &i: a) cin>>i

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vi v(n); t_in(v);
        set<ll> s(v.begin(), v.end());
        vector<ll> un_set(s.begin(), s.end());
        ll sum = 0;

        for(ll i = 0; i < un_set.size(); i++) {
            ll maxn = 0;
            for(ll j = 0; j < n; j++) {
                if(un_set[i] == v[j]) {
                    maxn = max(maxn, j);
                }
            }
            sum += maxn + 1;
        }
        cout << sum << '\n';
    }
}
