#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
         int n;cin>>n;
         vector<int> v;
        while (n--)
        {   
            string str;
            cin>>str;
            
            int f=0;
            for(int j=0;j<str.size();j++){
                f++;
                if(str[j]=='#'){
                    
                    v.push_back(f);
                    break;
                }
            }
        }
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        
    }
    
}
