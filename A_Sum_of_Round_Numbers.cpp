#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int count=0, i=-1;
        vector<int> vec;
        while(n>0){
            int rem=n%10;
            n/=10;
            if(rem!=0){
                count++;
                i++;
                int x=pow(10,i);
                int ans=x*rem;
                vec.push_back(ans);
            }if(rem==0) i++;
        }
        cout<<count<<'\n';
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<' ';
        }cout<<'\n';
    }
}