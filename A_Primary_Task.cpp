#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        string str=to_string(n);
        int tmp=n;
        while(n!=0){
            n/=10;
            cnt++;
        }
        if(str[0]==1){
            if(cnt==2){
                if((tmp-100)>2){
                    cout<<"yes\n";
                }
                else{
                    cout<<"no\n";
                }
                
            }
            else if(cnt==3){
                if((tmp-1000)>2){
                    cout<<"yes\n";
                }
                else{
                    cout<<"no\n";
                }
                
            }
            else if(cnt==4){
                if((tmp-10000)>2){
                    cout<<"yes\n";
                }
                else{
                    cout<<"no\n";
                }
                
            }
        }
        else{
            cout<<"no\n";
        }
    }
}