#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long cnt=0;
        while(n!=1)
        {
            if (n%6==0)
            {
                n=n/6;
                cnt++;
            }

            else if (n%3==0)
            {
                n=n*2;
                cnt++;
            }
            else
            {
                cnt=-1;
                break;
            }
        }
        cout<<cnt<<"\n";
    }
}
