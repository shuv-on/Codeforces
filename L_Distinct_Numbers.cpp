#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long int
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int n;cin>>n;
    vi v(n);t_in(v);
    set<int> s(v.begin(),v.end());
    cout<<s.size();
}