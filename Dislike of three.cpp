#include<iostream>
using namespace std;
int main ()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if (n%3!=0||n%10!=3)
        {
            cout<<n<<"\n";
        }
    }
}
