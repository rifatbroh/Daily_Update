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
#define no "NO"
#define PI 3.1415926535897932384626433832795

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    int a, b;
    cin >> a >> b;
    vector<pair<int, int>> v;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            char x;
            cin >> x;
            if (x == '#')
            {
                v.push_back({i, j});
            }
        }
    }
    int p = v.size();

    if (p == 1)
        cout << v[0].first << " " << v[0].second;
    else
        cout << v[p / 2].first << " " << v[p / 2].second;
}

int main()
{
    OLD_MAXTAN
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
