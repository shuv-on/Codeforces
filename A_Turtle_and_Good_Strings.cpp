#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=0;
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++){
            if(str[0]!=str[str.size()-1]){
                x=1;
            }
        }
        if(x==1){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
}
