#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n, target; cin >> n >> target;
    vector <pair<ll,ll>> v(n);
    for(ll i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(),v.end());
    ll left = 0, right = n-1;
    while(left < right){
        ll sum = v[left].first + v[right].first;
        if (sum == target){
            cout << v[left].second <<' ' << v[right].second;
            return 0;
        }else if (sum < target){
            left++;
        }else {
            right--;
        }
    }
    cout << "IMPOSSIBLE";
}