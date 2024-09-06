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
#define no "no"
#define PI 3.1415926535897932384626433832795

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    int n;
    cin >> n;
    string s; 
    cin >> s;
    if (n == 2) {
        cout << stoi(s) << '\n';
        return;
    }
    int ans = INF;
    for (int i = 0; i < n - 1; i++) {
        vector<int> v;
        for (int j = 0; j < i; j++) v.push_back(s[j] - '0');
        v.push_back(stoi(s.substr(i, 2)));
        for (int j = i + 2; j < n; j++) v.push_back(s[j] - '0');

        sort(v.begin(), v.end());

        if (v[0] == 0) {
            cout << "0"<<endl;
            return;
        }
        int sum = 0;
        for (auto i : v) {
            if (i != 1) sum += i;
        }
        if (sum == 0) sum = 1;
        ans = min(ans, sum);
    }
    cout << ans <<endl;
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
