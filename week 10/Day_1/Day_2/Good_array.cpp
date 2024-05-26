/*
    MD Rifat Hossain

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include<bits/stdc++.h>
using namespace std;

#define BISMILLAH                 \
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
    /*Lets start*/
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];

    ll sum = 0, count = 0;
    for (int x:a)
    {
        sum += x;
        if (x == 1)
            count++;
    }
    if (sum >= count + n && n > 1)
        cout << "YES";
    else
        cout <<"NO";
}
int main()
{
    BISMILLAH
    int tc;
    cin>>tc;
    // int t = 1;
    while(tc--)
    {
         // cout << "Case #" << t++ << ": ";
        solve();
        cout<<"\n";
    }
    return 0;
}