#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int t;cin>>t;
while(t--)
    {
        int n;cin>>n;
    vi v(n);
    int maxn=0,cpos=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
        if(x==0){
            cpos++;
            maxn=max(maxn,cpos);
        }else {
            cpos=0;
        }
    }
    cout<<maxn<<"\n";
    }
}