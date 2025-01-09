#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        if(k%2==1){
            cout<<x<<" "<<y<<"\n";
            k--;
        }
        for(int i=0;i<k/2;i++){
            cout<<x+(i+1)<<" "<<y<<"\n";
            cout<<x-(i+1)<<" "<<y<<"\n";
        }
    }
}
