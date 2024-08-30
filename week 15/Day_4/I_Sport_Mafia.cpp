/*
    MD Rifat
    
    country Bangladesh
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;

    for (ll m = 1; m <= n; m++)
    {
        ll Put = (m * (m + 1)) / 2;
        if (Put >= k) {
            ll  e = Put - k;
            if (m + e == n) {
                cout << e << endl;
                return 0;
            }
        }
    }

    return 0;
}
