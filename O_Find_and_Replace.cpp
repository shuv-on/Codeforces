#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int t;cin>>t;
    while(t--){
        int n;string str;cin>>n>>str;
        set<char> s;
        bool flag=true;
        for(int i=0;i<n;i+=2){
            s.insert(str[i]);
        }
        for(int i=1;i<n;i+=2){
            if(s.count(str[i])){
                flag=false;
                break;
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
}