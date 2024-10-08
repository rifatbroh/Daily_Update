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
        int a, b, c;
        cin >> a >> b >> c;
        int ar[3] = {a, b, c};
        sort(ar, ar + 3);
        
        for (int i = 0; i < 5; i++) {
            if (ar[0] + 1 <= ar[1])
                ar[0]++;
            else if (ar[1] + 1 <= ar[2])
                ar[1]++;
            else
                ar[2]++;
        }
        cout << ar[0] * ar[1] * ar[2];
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