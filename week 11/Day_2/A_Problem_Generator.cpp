/*
    MD Rifat Hossain

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;

#define OLD_MAXTAN                 \
    ios_base::sync_with_stdio(0);  \
    cin.tie(0);                    \
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

void solve()
{
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;
    unordered_map<char, int> sum;
    for (char c: a)
        sum[c]++;
        
    int sum_valu = 0;
    string problem = "ABCDEFG";
    for (char c: problem)
    {
        if (sum[c] < m)
            sum_valu += m-sum[c];
    }
    cout << sum_valu;
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
