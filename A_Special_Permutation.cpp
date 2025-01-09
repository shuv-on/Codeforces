#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);
    int t; cin>>t; 
    while (t--){
        int n;cin>>n;
        cout<<n<<' ';
        for(int i=1;i<n;i++) cout<<i<<' ';
        cout<<'\n';
    }
    
}