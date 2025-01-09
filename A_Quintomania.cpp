#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vi vec(n); t_in(vec);
        int flag=0;
        for(int i=0;i<vec.size()-1;i++){
            int dif=abs(vec[i]-vec[i+1]);
            if(dif==7||dif==5){
                flag++;
            }
        }
        if(flag==vec.size()-1){
            cout<<"YES\n";
        }else {
            cout<<"NO\n";
        }
    }
}