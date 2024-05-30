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
    /*Lets play*/
    ll n;
    cin >> n;
    ll ans = 0,flag = 0,diff = 1e15;

    ll a[n], b[n + 1];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i <= n; i++) cin >> b[i];

    ll last_val = b[n];
    //working procedure
    for(ll i = 0; i < n; i++)
    {
        ans += abs(a[i] - b[i]);
        if(last_val >= min(a[i], b[i]) and last_val <= max(a[i], b[i]))
            flag = 1;

        diff = min(diff, abs(a[i] - last_val));
        diff = min(diff, abs(b[i] - last_val));
    }

    if(flag)
    {
        ans++;
        cout << ans;
    }
    else
    {
        ans += diff + 1;
        cout << ans;
    }
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
