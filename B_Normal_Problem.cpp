#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int t;cin>>t;
    while(t--){
        string str;cin>>str;
        for(int i=0;i<str.size();i++){
            if(str[i]=='p'){
                str[i]='q';
            }else if(str[i]=='q'){
                str[i]='p';
            }
        }
        reverse(str.begin(),str.end());
        cout<<str<<'\n';
    }
}