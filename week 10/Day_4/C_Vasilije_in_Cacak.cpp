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
#define yes cout << "YES"
#define no cout << "NO"
#define pb push_back
#define vi vector<int>
#define vp vector<pair<int, int>>
#define mp map<int, int>
#define vec(v) v.begin(), v.end()
/* !    !   !   !   !   !   !   */
#define PI 3.1415926535897932384626433832795

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    ll n, k, x, ans = 0, i = 1, j = 0;
    cin >> n >> k >> x;
    vector<ll> uns;
    ans = k * (k + 1) / 2;
    if (ans > x)
    {
        cout << "NO\n";
        return;
    }
    else if (ans == x)
    {
        cout << "YES\n";
        return;
    }
    ll ext = n - k;
    if ((x - ans) <= (ext * k))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}

int main()
{
    OLD_MAXTAN
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}