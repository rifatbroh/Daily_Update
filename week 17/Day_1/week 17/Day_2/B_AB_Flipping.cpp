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

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll ans = n - 1;
    for(int i = 0; i < n; i++){
        if(s[i] == 'B') ans--;
        else 
            break;
    }

    for(int j = n - 1; j >= 0; j--){
        if(s[j] == 'A') ans--;
        else
            break;
    }
    ans = max(ans, 0ll);
    cout << ans ;
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