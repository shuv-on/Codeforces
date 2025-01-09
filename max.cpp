#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int n;cin>>n;
    vi v(n);t_in(v);
    int maxn=-1e9;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=v[k];
            }
            maxn=max(maxn,sum);
        }
    }
    cout<<maxn<<'\n';
}