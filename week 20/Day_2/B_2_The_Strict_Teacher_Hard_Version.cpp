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
		int n, m, q; cin >> n >> m >> q;

		vector<int> a(m);
		for (int i = 0; i < m; i++) cin >> a[i];

		sort(a.begin(), a.end());

		for (int i = 1; i <= q; i++) {
			int b; cin >> b;
			int k = upper_bound(a.begin(), a.end(), b) - a.begin();

			if (k == 0)
                cout << a[0] - 1 <<endl;
			else if (k == m)
                cout << n - a[m - 1] << endl;
			else
                cout << (a[k] - a[k - 1]) / 2 << endl;  
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
        //cout<<"\n";
    }
    return 0;
}