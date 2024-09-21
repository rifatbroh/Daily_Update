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
    // sliding window approach
        ll n;
        ll l, r;
        cin >> n >> l >> r;

        vector<ll> a(n);
        for (ll &element : a) {
            cin >> element;
        }

        ll max_wins = 0;
        ll curr = 0;
        ll start = 0;

        for (ll i = 0; i < n; i++) {
            if (a[i] > r) {
                curr= 0;
                start = i + 1;
                continue;
            }
            curr += a[i];
            while (curr < l && i < n - 1) {
                i++;
                curr += a[i];
            }

            if (curr >= l && curr <= r) {
                max_wins++;
                curr = 0;
                start = i + 1;
            } else if (curr > r) {
                curr = 0;
                i = start;
                start++;
            }
        }

        cout << max_wins ;
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