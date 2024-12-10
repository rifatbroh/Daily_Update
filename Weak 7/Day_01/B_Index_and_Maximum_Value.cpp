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
#define vi vector<ll>
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
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    ll mx = INT_MIN;
    for (auto &a : v)
    {
        cin >> a;
        mx = max(a, mx);
    }
 
    while (q--)
    {
        char c;
        int l, r;
        cin >> c >>l >> r;
        if (l <= mx && mx <= r)
        {
            if (c == '-')
                mx--;
            else
                mx++;
        }
        cout << mx << " ";
    }
    //cout << endl;
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