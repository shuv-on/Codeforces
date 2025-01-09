#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;cin>>n;
    while(n!=1){
        if(n%2==1){
            cout<<n<<" ";
            n=(n*3)+1;
        }else{
            cout<<n<<" ";
            n/=2;
        }
    }cout<<"1";
}
