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
#define no "no"
#define PI 3.1415926535897932384626433832795

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
const int N = 109;
int s[N], e[N];

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> s[i] >> e[i];

    bool method = true;
    for (int i = 1; i < n; ++i) 
        if (s[i] >= s[0] && e[i] >= e[0])
            method = false;

    if (!method) {
        cout << "-1";
    } else {
        cout << s[0];
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
