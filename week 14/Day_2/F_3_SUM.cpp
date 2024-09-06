/*
    MD Rifat Hossain

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;

#define OLD_MAXTAN                 \
    ios_base::sync_with_stdio(0);  \
    cin.tie(0);                    \
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
    /* Let's play */
    int n;
    cin >> n;
    int cnt[10] = {};
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x % 10]++;
    }

    vector<int> v;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < min(cnt[i], 3); j++) {
            v.push_back(i);
        }
    }

    int m = v.size();
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            for (int k = j + 1; k < m; k++)
            {
                if ((v[i] + v[j] + v[k]) % 10 == 3)
                {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
    cout << "NO\n";
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
