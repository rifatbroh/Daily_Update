#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void NumberSpiral(ll Y, ll X)
{
    if (Y > X) {
        ll ans = (Y - 1) * (Y - 1);
        ll add = (Y % 2 != 0) ? X : 2 * Y - X;
        cout << ans + add << "\n";
    } else {
        ll ans = (X - 1) * (X - 1);
        ll add = (X % 2 == 0) ? Y : 2 * X - Y;
        cout << ans + add << "\n";
    }
}

int main()
{
    ll Y = 2, X = 3;
    NumberSpiral(Y, X);
}

