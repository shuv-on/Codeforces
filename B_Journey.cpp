#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t; 
    cin >> t;
    while(t--){
        ll n; 
        cin>>n;
        ll a, b, c; 
        cin>>a>>b>> c;

        ll sum = 0;
        ll i = 0; 
        while (sum<n) {
            if (i % 3 == 0) sum += a;
            else if (i%3==1) sum += b;
            else sum += c;

            i++;
        }
        cout << i << '\n';
    }
    return 0;
}
