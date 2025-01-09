#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<vector<int>> mat(n,vector<int>(n));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>mat[i][j];
                if(mat[i][j]<0){
                    ans+=abs(mat[i][j]);
                }
            }
        }
        cout<<ans<<"\n";
    }
}
