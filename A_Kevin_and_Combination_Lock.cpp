#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int t;cin >> t;
    while(t--){
        ll n;cin >> n;
        if(n%33==0){
            cout<<"yes\n";
        }else {
            cout<<"no\n";
        }
    }
}