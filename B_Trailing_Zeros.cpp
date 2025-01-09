#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
#define lli long long int
int main(){
    lli n;cin>>n;
    lli fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    string str=to_string(fact);
    reverse(str.begin(),str.end());
    // cout<<str<<"\n";
    int sz=str.size(),cnt=0;
    for(lli i=0;i<sz;i++){
        if(str[i]=='0'){
            cnt++;
        }
        else {
            break;
        }
    }
    cout<<cnt<<"\n";
}