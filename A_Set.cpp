#include<bits/stdc++.h>
#define vi vector<long long int> 
#define pb push_back
#define ll long long int
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        
        ll l,r,k;cin>>l>>r>>k;
        ll s=r-l;
        vi vec(s+1);
        vi new_vec;
        for(ll i=l;i<=r;i++){
            vec.pb(i);
        }
        for(ll m=0;m<vec.size()-1;m++){
            for(ll j=m+1;j<vec.size();j++){
                if((vec[m]*k)==vec[j])
                new_vec.pb(vec[j]);
                break;
            }
        }
        cout<<new_vec.size()<<"\n";
        
    }
}