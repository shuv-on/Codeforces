#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m;
        cin>>h>>m;
        int ans=0;
        ans=(24*60)-(h*60)-m;
        cout<<ans<<"\n";
    }
}
