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
    ll n, k;
    cin >> n >> k;

    // bool flag = false;
    // for (int i=0; i<n; i++){
    //     for (int j=i+1; j<n; j++){
    //         int cal = 2*i + k*j;
    //         if (cal == n){
    //             flag = true;
    //             break;
    //         } 
    //     }
    // }
    // if (flag)
    //     cout << "YES";
    // else
    //     cout << "NO";

    if (n%2==0 || k%2 == 1)
        cout << "YES";
    else
        cout << "NO";
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