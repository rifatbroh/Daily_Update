/*
    MD Rifat Hossain
    
    Country: Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define OLD_MAXTAN                 \
    ios_base::sync_with_stdio(0);  \
    cin.tie(0);                    \
    cout.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<int> x(n), p(n);
    for (int i = 0; i < n; ++i) cin >> x[i];
    for (int i = 0; i < n; ++i) cin >> p[i];

    // Forward activation check
    vector<bool> forward_activated(n, false);
    forward_activated[0] = true;
    int max_reach = x[0] + p[0];
    for (int i = 1; i < n; ++i) {
        if (x[i] <= max_reach) {
            forward_activated[i] = true;
            max_reach = max(max_reach, x[i] + p[i]);
        } else {
            break;
        }
    }

    // Backward activation check
    vector<bool> backward_activated(n, false);
    backward_activated[n - 1] = true;
    int min_reach = x[n - 1] - p[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        if (x[i] >= min_reach) {
            backward_activated[i] = true;
            min_reach = min(min_reach, x[i] - p[i]);
        } else {
            break;
        }
    }

    if (forward_activated[n - 1] || backward_activated[0]) {
        cout << "YES";
        return;
    }
    for (int i = 1; i < n; ++i) {
        if (forward_activated[i - 1] && backward_activated[i]) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
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
