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

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> candies(n);
    vector<int> chocolates(n);

    for (int i = 0; i < n; ++i) cin >> candies[i];
    for (int i = 0; i < n; ++i) cin >> chocolates[i];

    unordered_map<int, int> x;
    unordered_map<int, int> y;
    for (int candy : candies)
    {
        int val = candy % k;
        x[val]++;
    }
    for (int chocolate : chocolates) {
        int value = chocolate % k;
        y[value]++;
    }
    ll count = 0;
    for (auto i = x.begin(); i != x.end(); i++) {
        int candy_mod = i->first;
        int candy_count = i->second;
        int chocolate_mod = (k - candy_mod) % k;

        if (y.find(chocolate_mod) != y.end()) {
            count += (ll)candy_count * y[chocolate_mod];
        }
    }
    cout << count;
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
