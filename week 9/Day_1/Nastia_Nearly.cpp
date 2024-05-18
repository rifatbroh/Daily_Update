#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;
        if (y == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << x << ' ' << x * (long long)y << ' ' << x * (long long)(y + 1) << endl;
        }
    }
}
