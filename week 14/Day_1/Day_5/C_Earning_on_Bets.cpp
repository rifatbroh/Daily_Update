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
const int LCM = 232792560;

void solve()
{
    /* let's play*/
    int n;
    cin>>n;
    vector<int>k(n);
    vector<int>x(n);
    for(int i=0; i<n; i++)
    {
        cin>>k[i];
        x[i] = LCM/k[i];
    }

    ll sum = accumulate(x.begin(),x.end(),0ll);
    if((ll)LCM > sum)
    {
        for(int i=0; i<n; i++)
        {
            cout<<x[i]<<" ";
        }
        
        return;
    }
    cout<<"-1";
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