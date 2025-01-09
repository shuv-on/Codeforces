#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string str;cin>>str;
        int s=str.size()-1;
        if(str[s]=='A') cout<<"A\n";
        else cout<<"B\n";
    }
}