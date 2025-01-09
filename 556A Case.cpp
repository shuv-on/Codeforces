#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long long int n;
    cin>>n;

    string str;
    cin>>str;

    int zero=count(str.begin(),str.end(), '0');
    int one=count(str.begin(),str.end(),'1');

     cout<<abs(zero-one)<<"\n";
}
