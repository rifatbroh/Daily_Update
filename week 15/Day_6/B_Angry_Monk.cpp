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
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        for(int i = 0; i < k; i++) cin >> a[i];

        sort(a.begin(), a.end());
        int res = 0;

        for(int i = 0; i < k - 1; i++){
            if(a[i] == 1)
                res += 1;
            else
                res += a[i] * 2 - 1;
        }
        cout << res ;
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