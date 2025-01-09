#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define pb push_back
using namespace std;
int main()
{
    int k;
    cin >> k;

    vector<int> vec;
    for (int i = 1; i <= 12; i++)
    {
        int x;
        cin >> x;
        vec.pb(x);
    }

    std::sort(vec.begin(), vec.end(), std::greater<int>());

    int sum = 0, cnt = 0;

    for (int y = 0; y < vec.size(); y++)
    {
        sum += vec[y];
        cnt++;
        if (sum >= k)
        {
            break;
        }
    }
    if(k==0)
    {
        cout<<"0"<<"\n";
    }
    else if(sum>=k)
    {
        cout<<cnt<<"\n";
    }
    else
    {
        cout<<"-1"<<"\n";
    }
}