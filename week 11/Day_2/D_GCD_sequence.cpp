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

int gcd(int a, int b)
{
    return __gcd(a, b);
}
bool remove_order(vector<int>& a)
{
    int n = a.size();
    vector<int> gcd_cnt(n-1);
    for (int i=0; i<n-1; i++)
    {
        gcd_cnt[i] = gcd(a[i], a[i+1]);
    }
    int cnt =0; 
    for (int i=0; i<n-2; i++)
    {
        if (gcd_cnt[i] > gcd_cnt[i+1])
        {
            cnt++;
            if (cnt > 1)
                return false;
        }
    }
    return true;
}
void solve()
{
    /*Lets play*/
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    if (remove_order(a))
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