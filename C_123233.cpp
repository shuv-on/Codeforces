//Md. Shishir Kaysar Shuvon
#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
#define lli long long int
int main(){
    lli n;cin>>n;
    string s=to_string(n);
    int ones=0,two=0,three=0;
    for(lli i=0;i<s.size();i++){
        ones+=(s[i]=='1');
        two+=(s[i]=='2');
        three+=(s[i]=='3');
    }
    if(ones>=1&&two>=2&&three>=3) cout<<"Yes\n";
    else cout<<"No\n";
}