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
#define vi vector<ll>
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
        int n;
        cin >> n;
        map<int, int> numOfLens;
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            ++numOfLens[x];
        }
        
        long long res = 0;
        int sum = 0;
        for (auto it : numOfLens) {
            long long cnt = it.second;
            if(cnt >= 3)
                res += cnt * (cnt - 1) * (cnt - 2) / 6;
            if(cnt >= 2)
                res += cnt * (cnt - 1) / 2 * sum;
            sum += cnt;
        }
        
        cout << res;
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