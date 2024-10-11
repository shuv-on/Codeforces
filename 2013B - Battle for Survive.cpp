#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
        long long int sum=0;
        for(int i=0;i<vec.size();i++){
            sum=sum+vec[i];
        }
        cout<<sum-(2*vec[vec.size()-2])<<"\n";
    }
}
