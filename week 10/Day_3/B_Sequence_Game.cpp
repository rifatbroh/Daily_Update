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
        
        vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        
        vector<int> a;
        a.push_back(b[0]);
        
        for (int i = 1; i < n; ++i) {
            if (b[i] > b[i - 1]) {
                a.push_back(b[i]);
            }
        }
   
        cout << a.size() << endl;
        for (int i = 0; i < a.size(); ++i) {
            cout << a[i];
            if (i != a.size() - 1) {
                cout << " ";
            }
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