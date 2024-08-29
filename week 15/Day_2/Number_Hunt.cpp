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

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

bool prime(ll n) {
    if (n <= 1) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool perfect(ll n) {
    ll r = sqrt(n);
    return r * r == n;
}

void solve() {
    ll a;
    cin >> a; 

    ll b = a + 1;
    while (true) {
        if (prime(b) || perfect(b)) {
            b++;
            continue;
        }
        bool right = true;
        for (ll i = 2; i * i <= b; i++) {
            if (b % i == 0 && i < a) {
                right = false;
                break;
            }
        }
        if (right) break;
        b++;
    }

    cout << b;
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
