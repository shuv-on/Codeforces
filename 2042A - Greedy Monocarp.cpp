#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    optimize();
    int t;cin>>t;
    while(t--){
    int n,k;cin>>n>>k;
    vi v(n);t_in(v);
    sort(v.begin(),v.end(), greater<int>());
   
   int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(sum>k){
            sum-=v[i];
            break;
        }
       
    }
    cout<<abs(k-sum)<<"\n";
    
}
}
