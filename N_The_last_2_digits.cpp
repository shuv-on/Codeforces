#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long int
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    ll a,b,c,d; cin>> a>> b>> c>> d;
    ll multiply=a*b*c*d;
    string str= to_string(multiply);
    ll sz_str=str.size();
    cout<<str[sz_str-2]<<str[sz_str-1]<<'\n';
}