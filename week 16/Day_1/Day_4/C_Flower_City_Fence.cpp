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

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    if (a[1] != n) {
        cout << no;
        return;
    }
    vector<int> b;
    for (int i = n; i >= 1; i--) {
        while (b.size() < a[i]) {
            b.push_back(i);
        }
    }
    bool meow = true;
    for (int i = 1; i <= n; i++) {
        if (a[i] != b[i - 1]) {
            cout << no << '\n';
            meow = false;
            break;
        }
    }
    if (meow) {
        cout << yes;
    }
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
