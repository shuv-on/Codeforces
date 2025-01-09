#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int t;cin>>t;
    for(int j=1;j<=t;j++){
        int n,k;cin>>n>>k;
        while(n--){
            int x,y;cin>>x>>y;
            vector<int> day;
            vector<int> ans;
            for(int i=x;i<=k;i++){
                day.push_back(i);
            }
            int diff=x-y;
            for(int c=0;c<day.size();c++){
                if(day[c]>=day[i]+diff){
                    
                }
            }
        }
    }
}