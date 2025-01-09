#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vi v(n);t_in (v);
        map<int,int> freq;
        for(int i=0;i<v.size();i++){
            freq[v[i]]++;
        }
        
        for(auto it:freq){
            if(it.second==1){
                cout<<it.first<<'\n';
            }
        }
    }
}