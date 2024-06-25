/*
    MD Rifat Hossain

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include<bits/stdc++.h>
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

void solve() {
    ll x, y, z;
    cin >> x >> y >> z;

    ll r = x % y;
    r = y - r;
    
    if (z < r) {
        cout << x + z;
        return;
    }
    if (z == r) {
        x += z;
        while (x % y == 0) {
            x /= y;
        }
        cout << x;
        return;
    }
    while (true) {
        ll e = r;
        if (x == 1)
            break;
        if (z >= e) {
            z -= e;
            x += e;
            while (x % y == 0)
                x /= y;
            r = y - x % y;
        } else {
            x += z;
            z = 0;
            break;
        }
    }
    if (z != 0)
        cout << z % (y - 1) + 1;
    else
        cout << x;
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
