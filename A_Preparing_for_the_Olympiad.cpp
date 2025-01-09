#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int t; cin>> t;
    while(t--){
        int n; cin>>n;
        vi mon_vec(n); 
        t_in (mon_vec);
        vi ster_vec;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            ster_vec.push_back(x);
        }
        int sz=ster_vec.size()+1;
        ster_vec.push_back(0);
        
        int mon_sum=0,ster_sum=0;
        for(int i=0;i<n;i++){
            if(mon_vec[i]>ster_vec[i+1]){
                mon_sum+=mon_vec[i];
                ster_sum+=ster_vec[i+1];
            }
        }
       int ans=mon_sum-ster_sum;
        cout<<ans<<'\n';
    }
}