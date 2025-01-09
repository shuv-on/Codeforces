#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<string> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<string> v1={"X++"};
        vector<string> v2={"++X"};
        vector<string> v3={"X--"};
        vector<string> v4={"--X"};
        int count=0;
        for(int i=0;i<vec.size();i++){
            if(v1[0]==vec[i]){
                count++;
            }
            else if(v2[0]==vec[i]){
                count++;
            }
            else if(v3[0]==vec[i]){
                count--;
            }
            else{
                count--;
            }
        }
        cout<<count;

}
