#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int t;cin>>t;
    while(t--){
        map<int,int> mp;
        vi vec;
        int n,k;cin>>n>>k;
        for(int i=1;i<=k;i++){
            int a,b;cin>>a>>b;
            mp[a]+=b;
        }
        for(auto &i:mp){
            vec.push_back(i.second);
        }
        sort(vec.begin(),vec.end(), greater<int> ());
        int ans=0;
        int sz=vec.size();
        for(int j=0;j<min(n,sz);j++){
            ans+=vec[j];
        }
        cout<<ans<<"\n";
    }
}
