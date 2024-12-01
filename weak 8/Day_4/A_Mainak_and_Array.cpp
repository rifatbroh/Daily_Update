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
    /* _THE^MAXTAN_*/
    ll n;
    cin >> n;

    vi v(n);
    for (ll i=0; i<n; i++) cin >> v[i];

    // sort(v.begin(), v.end());
    // int mx = *max_element(v.begin(), v.end());
    // int mn = *min_element(v.begin(), v.end());
    // cout << mx - mn ;

    int ans = (v[n-1] - v[0]);
    for (int i=0; i<n-1; i++){
        ans = max(ans, v[i] - v[i+1]);
    }
    for (int i=1; i<n; i++){
        ans = max(ans, v[i-1] - v[i]);
    }
    for (int i=0; i<n-1; i++){
        ans = max(ans, v[n-1] - v[i]);
    }
    for (int i=1; i<n; i++){
        ans = max(ans, v[i] - v[0]);
    }
    
    cout << ans ;
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