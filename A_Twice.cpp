#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vi v(n);t_in(v);
        sort(v.begin(),v.end());
        int count=0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]){
                count++;
                i++;
            }
        }
        cout<<count<<"\n";
    }
    
}