#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define vi vector<long long int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int n;cin>>n;
    vi v(n);t_in(v);
    vi n_v(v.begin(),v.end());
    sort(n_v.begin(),n_v.end());
    int ans=n_v[n_v.size()-2];
    for(int i=0;i<v.size();i++){
       
        if(ans==v[i]){ 
        cout<<i+1<<"\n";
        break;
        }
    }
}