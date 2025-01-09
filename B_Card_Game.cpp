#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=0;
    if((a>c&&b>=d)||(a>=c&&b>d))ans+=2;
    if((a>d&&b>=c)||(a>=d&&b>c))ans+=2;
    cout<<ans<<"\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}