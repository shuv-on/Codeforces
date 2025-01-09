#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define t_in(a) for(auto &i: a) cin>>i

int solve(vector<int> v, int target, int l, int r) {
    while (l <= r) {
        int mid = (l + r) / 2;
        if (v[mid] == target) {
            return mid+1;
        } else if (v[mid] > target) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vi v(n);
    int maxn = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        maxn = max(maxn, v[i]);
    }
    int l = 0, r = n - 1;
    cout << solve(v, maxn, l, r);

    return 0;
}
