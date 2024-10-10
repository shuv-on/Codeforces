//2013A - Zhan's Blender
//shuvon
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int x,y;
        cin>>x>>y;
        int ans=ceil((double)n/min(x,y));
        cout<<ans<<"\n";
    }
}
