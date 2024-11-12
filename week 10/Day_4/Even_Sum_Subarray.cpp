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
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        // input
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        // even sum
        if (sum % 2 == 0)
            cout << n;
        else {
            int f = -1;
            int l = -1;
            for (int i = 0; i < n; ++i)
            {
                // not even
                if (a[i] % 2 != 0)
                {
                    if (f == -1)
                        f = i;
                    l = i;
                }
            }
            
            if (f != -1)
            {
                int First = n - f - 1;
                int Last = l;
                // calculate maximum
                cout << max(First, Last) ;
            } else
                cout << 0;
        }
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