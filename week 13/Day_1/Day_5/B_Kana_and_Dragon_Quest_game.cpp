#include <bits/stdc++.h>
using namespace std;

#define OLD_MAXTAN                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    while (a > 0 && b && a / 2 + 10 < a) {
        b--;
        a = a / 2 + 10;
    }
    if (a <= c * 10)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    OLD_MAXTAN
    int t;
    cin >> t;
    while (t--) {
        solve();
        //cout << "\n";
    }
    return 0;
}
