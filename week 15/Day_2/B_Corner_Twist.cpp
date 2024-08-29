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

const int MAX_N = 505;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    /*let's play*/
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            char value;
            cin >> value;
            a[i][j] = value - '0';
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            char value;
            cin >> value;
            b[i][j] = value - '0';
        }
    }
    bool flag = true;
    for (int i = n - 1; i >= 1; i--) {
        for (int j = m - 1; j >= 1; j--) {
            if (a[i][j] != b[i][j])
            {
                int diff = (b[i][j] - a[i][j] + 3) % 3;
                a[i][j] = b[i][j];
                a[i-1][j] = (a[i-1][j] + 2 * diff) % 3;
                a[i][j-1] = (a[i][j-1] + 2 * diff) % 3;
                a[i-1][j-1] = (a[i-1][j-1] + diff) % 3;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i][0] != b[i][0])
        {
            flag = false;
            break;
        }
    }
    for (int j = 0; j < m; j++){
        if (a[0][j] != b[0][j])
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    OLD_MAXTAN
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
