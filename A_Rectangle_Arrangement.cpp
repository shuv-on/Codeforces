#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxa=0,maxb=0;
        while(n--){
            int a,b;cin>>a>>b;
            
             maxa=max(maxa,a);
             maxb=max(maxb,b);
        }
        int ans=0;
        ans=2*(maxa+maxb);
        cout<<ans<<"\n";
    }
}