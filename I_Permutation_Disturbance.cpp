#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vi v(n); t_in(v);
        int count = 0; 
        for(int i = 0; i < n; i++){
            if(v[i] == (i + 1)){ 
                if(i < n - 1){ 
                    
                    swap(v[i], v[i + 1]);
                    count++;
                } else {
                   
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}
