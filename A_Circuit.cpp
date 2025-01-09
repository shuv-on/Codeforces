#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int ones=0,zeros=0;
        for(int i=0;i<2*n;i++){
            int x;cin>>x;
            ones+=(x==1);
            zeros+=(x==0);
        }
        cout<<ones%2<<" "<<min(ones,zeros)<<"\n";
    }
}