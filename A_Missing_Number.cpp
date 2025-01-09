#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i

int main(){
    int n;cin>>n;
    vi v(n-1);t_in(v);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    int v_sum=0;
    for(int i=0;i<v.size();i++){
        v_sum+=v[i];
    }
    cout<<abs(v_sum-sum);
    
}