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

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int ans = n;

    for (int x = 0; x < 26; x++) {
        char c = 'a' + x;
        int i = 0, cur = 0;

        while (i < n) {
            int j = i;
            while (j < n && (s[j] == c) == (s[i] == c)) {
                j++;
            }
            if (s[i] != c) {
                cur = max(cur, j - i);
            }
            i = j;
        }

        if (cur == 0) {
            ans = 0;
            break;
        }

        int pw = 0;
        while ((1 << pw) <= cur) {
            pw++;
        }
        ans = min(ans, pw);
    }

    cout << ans << "\n";
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
