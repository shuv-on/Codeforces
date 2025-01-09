#include<bits/stdc++.h>
#define read(a) for(auto &i:a) cin>>i
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> vec(n-1);
    read(vec);
    int sum_A=0,sum_B=0;
    for(int i=1;i<=n;i++){
        sum_A+=i;
    }
    for(int i=0;i<vec.size();i++){
        sum_B+=vec[i];
    }
    cout<<abs(sum_A-sum_B);
}