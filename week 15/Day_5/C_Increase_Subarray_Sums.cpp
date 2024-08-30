/*
    MD Rifat Hossain

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;

#define OLD_MAXTAN                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define ld long double
#define yes "YES"
#define no "no"
#define PI 3.1415926535897932384626433832795

const int INF = 1e9;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> mx(n + 1, -INF);
    mx[0] = 0;

    for (int l = 0; l < n; l++) {
        int s = 0;
        for (int r = l; r < n; r++) {
            s += a[r];
            mx[r - l + 1] = max(mx[r - l + 1], s);
        }
    }
    vector<int> ans(n + 1, 0);

    for (int k = 0; k <= n; k++) {
        int bst = 0;
        for (int i = 0; i <= n; i++) {
            bst = max(bst, mx[i] + min(k, i) * x);
        }
        ans[k] = bst;
    }
    for (int k = 0; k <= n; k++) cout << ans[k] << " ";
    
}

int main() {
    OLD_MAXTAN
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}
