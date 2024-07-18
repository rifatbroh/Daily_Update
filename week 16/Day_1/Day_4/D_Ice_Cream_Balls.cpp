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
#define no "NO"
#define PI 3.1415926535897932384626433832795

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    /*Lets play*/
    int n;
    cin >> n;
    int l = 0, r = min<int>(2e9, 2 * n);
    while (r - l > 1) {
        int m = (l + r) >> 1;
        // m = x + y, answer = x + 2 * y
        if (m * (m - 1) / 2 + m < n) {
            l = m;
        } else {
            r = m;
        }
    }
    int y = n - r * (r - 1) / 2;
    if ((r + 1) * r / 2 <= n) {
        cout << min(r + y, r + 1 + n - (r + 1) * r / 2);
    } else {
        cout << r + y;
    }
}

int32_t main()
{
    OLD_MAXTAN
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
