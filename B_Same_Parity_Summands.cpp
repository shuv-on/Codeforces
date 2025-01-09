#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    int t; cin >> t;
    
    while(t--){
        int n, k; cin >> n >>k;
        if(n<k) {
         cout<<"NO\n";
         }
         else if((n%2==0&&k%2==0)||(n%2==1&&k%2==1)){
            cout<<"YES\n";
            for (int i=1;i<k;i++){
                cout<<"1"<<' ';
                n--;
            }cout<<n<<'\n';
        }
        else if (n%2==0&&k%2==1){
            if(n/2>=k){
                cout<<"YES\n";
                for(int i=1;i<k;i++){
                    cout<<"2"<<" ";
                    n-=2;
                }cout<<n<<'\n';
            }
            else {
                cout<<"NO\n";
            }
        }else if (n%2==1&&k%2==0) {
            cout<<"NO\n";
            }
    }
}