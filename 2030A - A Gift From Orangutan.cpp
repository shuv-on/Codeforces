#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vi v(n); t_in(v);
        int maxn=max_element(v.begin(),v.end())-v.begin();
        int minn=min_element(v.begin(),v.end())-v.begin();
        cout<<abs((n-1)*(v[maxn]-v[minn]))<<"\n";
    }
}
