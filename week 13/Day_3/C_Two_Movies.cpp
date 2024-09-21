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

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    ll cnt1 = 0, cnt2 = 0;
    
    for (int i=0; i<n; i++)
    {
        if (a[i] == b[i] || a[i] > b[i])
        {
            if (cnt1 >= cnt2)
                cnt2 += a[i];
            else
                cnt1 += a[i];
        }
        else
        {
            if (cnt1 >= cnt2)
                cnt2 += b[i];
            else
                cnt2 += b[i];
        }
    }

    cout << min(cnt1, cnt2);
}

int main()
{
    OLD_MAXTAN

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
