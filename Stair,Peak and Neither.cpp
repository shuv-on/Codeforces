#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a<b and b<c and a<c)
        {
            cout<<"STAIR"<<"\n";
        }
        else if (a<b and b>c)
        {
            cout<<"PEAK"<<"\n";
        }
        else
        {
            cout<<"NONE"<<"\n";
        }
    }
}
