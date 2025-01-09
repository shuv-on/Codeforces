#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for (auto &i : a)  cin >> i
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int new_a, new_b;
        if (m < a)
            new_a = 0;
        else
            new_a = m - a;
        if (m < b)
            new_b = 0;
        else
            new_b = m - b;
        cout << min(a, m) + min(b, m) + min(new_a + new_b, c) << '\n';
    }
}