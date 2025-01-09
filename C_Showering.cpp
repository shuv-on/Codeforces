#include<bits/stdc++.h>
#include<vector>
using namespace std;
using ll=long long int;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll n,s,m;
        cin>>n>>s>>m;
        vector<int> v;
        int l,r;
        for(int i=1;i<=n;i++){
            cin>>l>>r;
            v.push_back(l);
            v.push_back(r);
        }
        v.push_back(m);
        v.insert(v.begin(),0);
        int ans=0;
        for(int i=1;i<v.size();i+=2){
            if((v[i]-v[i-1])>=s){
                ans++;
                break;
            }
        }
        if(ans>0)cout<<"yes\n";
        else cout<<"no\n";

    }
    return 0;
    
}