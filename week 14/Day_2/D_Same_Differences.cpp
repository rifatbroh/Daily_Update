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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> b(n);
    for (int i = 0; i < n; i++) b[i] = a[i] - i;

    sort(b.begin(), b.end());

    ll cnt = 0;
    ll curr_count = 1;

    for (int i = 1; i < n; i++) {
        if (b[i] == b[i - 1])
            curr_count++;
        else {
            cnt += (curr_count * (curr_count - 1)) / 2;
            curr_count = 1;
        }
    }
    cnt += (curr_count * (curr_count - 1)) / 2;

    cout << cnt;
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
