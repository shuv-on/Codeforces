#include<bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define t_in(a) for(auto &i: a) cin>>i
int main(){
    int n;cin>>n;
    vi v(n);t_in(v);
    int count=1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (v[j] > v[j+1]) {
            swap(v[j],v[j+1]);
            count++;
            }
        }
    }cout<<count;
}