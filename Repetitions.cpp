#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    sort(s.begin(),s.end());
    int sum=0,maxn=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            sum++;
        }
        maxn=max(maxn,sum);
    }
    cout<<maxn<<"\n";
}