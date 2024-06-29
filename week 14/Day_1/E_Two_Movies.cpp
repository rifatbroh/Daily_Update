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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int x = 0;
    int y = 0;
    // unequal
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (a[i] > b[i])
                x += a[i];
            else
                y += b[i];
        }
    }
    // both 1
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1 && b[i] == 1)
        {
            if (x < y)
                x++;
            else
                y++;
        }
    }
    // both -1
    for (int i = 0; i < n; i++)
    {
        if (a[i] == -1 && b[i] == -1)
        {
            if (x < y)
                y--;
            else
                x--;
        }
    }
    cout << min(x, y);
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