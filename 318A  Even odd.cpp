#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
    vector<int> odd_vec;
    vector<int> even_vec;


    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
        if(i%2!=0)
       {
            odd_vec.push_back(i);
       }
        else
        {
            even_vec.push_back(i);
        }
    }

    //add two vector
    vector<int> vec;

    vec.reserve(odd_vec.size()+even_vec.size());

    //copying odd_vec elements
    vec.insert(vec.end(),odd_vec.begin(),odd_vec.end());

    //copying even_vec elementd
    vec.insert(vec.end(),even_vec.begin(),even_vec.end());

    cout<<vec[b-1]<<"\n";

}
