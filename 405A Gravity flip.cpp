#include<iostream>
#include<vector>
#include<algorithm>
#define PB push_back
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector <int> vec;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
       vec.PB(x);
    }
   sort(vec.begin(),vec.end());

    for (int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
}

