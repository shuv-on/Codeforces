#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
#define lli long long int
int main(){
    lli num;cin>>num;
    lli maxn=0;
    for(lli i=1;i<=sqrt(num);i++){
        lli sqr=i*i;
        if(num>=sqr)maxn=max(maxn,sqr);
    }
    cout<<maxn;
}