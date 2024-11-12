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
        string S;
        cin >> S;

        vector<ll> p(n + 1, 0);
        vector<ll> q(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            p[i] = p[i - 1];
            q[i] = q[i - 1];
            // step for 0
            if (S[i - 1] == '0')
                p[i]++;
            // step for one
            else if (S[i - 1] == '1')
                q[i]++;
        }

        ll value = 0;

        // Calculate the sum
        for (ll j = 1; j <= n; j++)
        {
            for (ll k = j; k <= n; k++) {
                ll c1 = p[k] - p[j - 1];
                ll c2 = q[k] - q[j - 1];
                if (c1 == c2)
                    value += 2; 
                else
                    value += 1;
            }
        }
        cout << value ;
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