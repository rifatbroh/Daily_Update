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
        vector<long long> ans(n + 1);
        int o = 0, e = 0, a = 1, b = n;

        for (int i = 1; i <= n - 2; i++) {
            if (i % 2) {
                o ^= a;  // XOR1
                ans[i] = a++;
            } else {
                e ^= b;  // XOR2
                ans[i] = b++;
            }
        }

        ans[n - 1] = (e ^ INT_MAX);
        ans[n] = (o ^ INT_MAX);

        for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";
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