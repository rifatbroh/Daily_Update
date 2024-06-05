#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

void solve()
{
    // Your solution logic goes here
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n + 1];
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    vector<pair<pair<ll, ll>, ll>> v;
    for (ll i = 0; i < m; i++)
    {
        ll l, r, d;
        cin >> l >> r >> d;
        v.push_back({{l, r}, d});
    }

    ll b[n + 2] = {0};
    ll c[m + 2] = {0};
    while (k--)
    {
        ll x, y;
        cin >> x >> y;
        c[x]++;
        c[y + 1]--;
    }
    for (ll i = 1; i <= m + 1; i++)
    {
        c[i] = c[i - 1] + c[i];
    }

    for (ll i = 1; i <= m; i++)
    {
        b[v[i - 1].first.first] += c[i] * v[i - 1].second;
        b[v[i - 1].first.second + 1] -= c[i] * v[i - 1].second;
    }
    for (ll i = 1; i <= n + 1; i++)
    {
        b[i] = b[i - 1] + b[i];
    }
    for (ll i = 1; i <= n; i++)
    {
        cout << b[i] + a[i] << " ";
    }
    return 0;
}
