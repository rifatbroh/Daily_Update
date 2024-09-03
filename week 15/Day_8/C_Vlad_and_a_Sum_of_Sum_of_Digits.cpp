#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll digitSumUtil(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

ll sumOfDigits(ll n) {
    if (n < 10) return (n * (n + 1)) / 2;
    ll sum = 0, factor = 1;
    while (factor <= n) {
        ll higher = n / (factor * 10);
        ll current = (n / factor) % 10;
        ll lower = n % factor;
        
        sum += higher * factor * 45;
        sum += current * (lower + 1);
        if (current > 0) {
            sum += (current * (current - 1) / 2) * factor;
        }
        factor *= 10;
    }
    return sum;
}

void solve() {
    ll n;
    cin >> n;
    cout << sumOfDigits(n) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
