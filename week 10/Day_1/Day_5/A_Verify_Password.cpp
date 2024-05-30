/*
    MD Rifat Hossain

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;

#define OLD_MAXTAN                \
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

bool isStrongPassword(const string& pass) {
    bool letter = false;
    string letters, digits;
    for (char c : pass) {
        if (isdigit(c)) {
            if (letter) return false; // Digit after letter
            digits += c;
        } else {
            letter = true;
            letters += c;
        }
    }

    // Check if digits are sorted
    if (!is_sorted(digits.begin(), digits.end())) {
        return false;
    }

    // Check if letters are sorted
    if (!is_sorted(letters.begin(), letters.end())) {
        return false;
    }

    return true;
}

void solve() {
    int n;
    cin >> n;
    string pass;
    cin >> pass;
    if (isStrongPassword(pass)) {
        cout << yes;
    } else {
        cout << no;
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
