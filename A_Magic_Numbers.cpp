#include<bits/stdc++.h>
using namespace std;
using ll =long long int;

int main(){
    string s;
    cin>>s;
    bool flag=true;
    for(ll i=0;i<s.size();){
        if ((s[i]=='1')&&(s[i+1]=='4')&&(s[i+2]=='4')){
            i+=3;
        }
        else if((s[i]=='1')&&(s[i+1]=='4')){
            i+=2;
        }
        else if(s[i]=='1'){
            i++;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}