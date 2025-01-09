#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    string str;cin>>str;
    int cnt=0,maxn=0;
    vector<int> v;
    for(int i=0;i<str.size(); ){
        for(int j=i;j<str.size();j++){
            if(str[j]=='-'){
                cnt++;
                maxn=max(maxn,cnt);
            }else{
                cnt=0;
                i=j+1;
                break;
            }
        }
        v.push_back(maxn);
        maxn=0;
    }
    for(int num=1;num<v.size();num++){
        cout<<v[num]<<" ";
    }
}