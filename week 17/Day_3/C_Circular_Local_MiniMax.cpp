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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    if (v[n / 2 - 1] >= v[n / 2]) {
        cout << "NO\n";
        return;
    }
    
    cout << "YES\n";
    for (int i = 0; i < n / 2; i++) {
        cout << v[i] << " " << v[i + n / 2] << " "; 
    }

    if (n % 2 == 1)
        cout << v.back();
    
    cout << "\n";
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
