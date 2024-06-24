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
    /*let's play*/
	int n, d;
	ll c;
	cin >> n >> c >> d;
	ll a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n, greater<ll>());
	int l = 0, r = d + 2;
	while (l < r) {
		int m = l + (r - l + 1) / 2;
		ll ans = 0;
		int curr = 0;
		for (int i = 0; i < d; i++) {
			if (i % m < n) {ans += a[i % m];}
		}
		if (ans >= c)
			l = m;
		else
			r = m - 1;
	}
	if (l == d + 2) {cout << "Infinity"; return;}
	if (l == 0) {cout << "Impossible"; return;}
	cout << l - 1 ;
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