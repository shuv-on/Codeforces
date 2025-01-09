#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int n,l,r;cin>>n>>l>>r;
    int start=l-1,end=r-1;
    vi v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    reverse(v.begin()+start,v.begin()+end+1);
    for(int num:v){
        cout<<num<<" ";
    }
}