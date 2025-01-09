#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    int n, k; cin >> n >> k;
    vector<pair<int,int>> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec[i].first;
        vec[i].second=i+1;
    }
    int min_index=INT_MAX, max_index=INT_MIN;
    for(int i=0;i<n;i++){
        if (vec[i].first<=k){
            min_index=min(min_index, vec[i].second);
            max_index=max(max_index, vec[i].second);
        }
    }
    cout<<min_index<<" "<<max_index;

}