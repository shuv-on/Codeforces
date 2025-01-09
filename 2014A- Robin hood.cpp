#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,maxv,zero=0;
        cin>>n>>k;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        maxv=vec[vec.size()-1];
        for(int i=0;i<n;i++){
            if(vec[i]==0){
                zero++;
            }
        }
        int ans=0;
        if(maxv>=k){
        if(zero<maxv){
            cout<<zero<<"\n";
        }
        else{
            while(maxv--){
                ans++;
                if(ans==maxv){
                    break;
                }
            }
            cout<<ans<<"\n";
        }
        }
        else{
            cout<<"0\n";
        }
    }
}
