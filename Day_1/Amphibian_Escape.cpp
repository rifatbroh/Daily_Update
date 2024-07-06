#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
/*
    MD Rifat Hossain

    Institute: BAIUST
    Country: BANGLADESH
*/

void solve() {
    ll n, k, h;
    cin >> n >> k >> h;

    ll count = 0;

    for (ll i = 1; i <= n; i++) {
        if (i >= h)
            count += n;
        else {
            ll maxB = ((k * i) - h) / (k - 1);
            if (maxB > 0) {
                count += min(maxB, n);
            }
        }
    }

    cout << count << "\n";
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
