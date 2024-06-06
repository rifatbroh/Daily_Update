
#include<bits/stdc++.h>
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

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int j = 0; j < n; ++j) {
        cin >> a[j];
    }

    ll sum = 0;
    for (int i = 0; i < n - 1; ++i) sum += abs(a[i] - a[i + 1]);
    ll max_sum = sum;

    for (int i = 0; i < n; ++i)
    {
        if (i > 0)
        {
            ll sum2 = sum - abs(a[i] - a[i - 1]) + abs(1 - a[i - 1]);
            if (i < n - 1)
            {
                sum2 -= abs(a[i] - a[i + 1]);
                sum2 += abs(1 - a[i + 1]);
            }
            max_sum = max(max_sum, sum2);
        }

        if (i < n - 1) {
            ll next_sum = sum - abs(a[i] - a[i + 1]) + abs(k - a[i + 1]);
            if (i > 0) {
                next_sum -= abs(a[i] - a[i - 1]);
                next_sum += abs(k - a[i - 1]);
            }
            max_sum = max(max_sum, next_sum);
        }
    }

    cout << max_sum << endl;
}

int main() {
    OLD_MAXTAN
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
