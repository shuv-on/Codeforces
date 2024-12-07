#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vi v;
        while(n--){
            string str;cin>>str;
            int sz=str.size();
            v.push_back(sz);
        }
        int sum=0,cnt=0,flag=0;
        for(int i=0;i<v.size();i++){
         if((sum+=v[i])<=m){
             cnt++;
         }else {
             break;
         }
        }
        cout<<cnt<<"\n";
    }
}
