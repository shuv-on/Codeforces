#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n, x; cin >> n >> x;
    vector <pair<ll,ll>> arr(n);
    for (ll i = 0; i < n; i++){
        cin >> arr[i].first;
        arr[i].second = i+1;
    }
    sort (arr.begin(),arr.end());
    for (ll i = 0; i < n-2; i++){
        ll ptr2 = i+1;
        ll ptr3 = n-1;
        while (ptr2 < ptr3){
            ll sum = arr[i].first + arr[ptr2].first + arr[ptr3].first;
            if (sum == x){
                cout << arr[i].second << " " << arr[ptr2].second << " " << arr[ptr3].second;
                return 0;
            }else if (sum < x){
                ptr2++;
            }else {
                ptr3--;
            }
        }
    }
    cout << "IMPOSSIBLE";
}