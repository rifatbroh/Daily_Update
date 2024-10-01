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
    // int n;
    // cin >> n;
    // vi a(n);
    // for (int i=0; i<n; i++) cin >> a[i];

    // vi b, c;
    // sort(a.begin(), a.end());
    // b.push_back(a[0]);

    // for (int i=0; i<n; i++){
    //     if (a[i] % b[0] != 0)
    //         b.push_back(a[i]);
    //     else
    //         c.push_back(a[i]);
    // }
    // if (b.size() > 0 && c.size() > 0){
    //     cout << b.size() << " " << c.size();
    //     for (auto x : b)
    //         cout << x << " ";
    //     for (auto y : c)
    //         cout << y << " ";
    // }
    // else
    //     cout << "-1";

    // second time trying 
int n;
cin >> n;
vi a(n);
for (int i = 0; i < n; i++) cin >> a[i];
sort(a.begin(), a.end());

bool flag = false;
for (int i = 1; i < n; i++) {  // Start from i = 1 to avoid out-of-bounds access
    if (a[i] != a[i - 1]) {
        flag = true;
        break;
    }
}

if (!flag)
    cout << "-1" << endl;
else {
    int last = a[n - 1], pos = n - 1;
    vi b, c;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == last) {
            pos = i;
            break;
        }
        b.push_back(a[i]);
    }
    for (int i = pos; i < n; i++) {
        c.push_back(a[i]);
    }
    cout << b.size() << " " << c.size() << endl;
    for (auto x : b)
        cout << x << " ";
    cout << endl;
    for (auto y : c)
        cout << y << " ";
    cout << endl;
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
        //cout<<"\n";
    }
    return 0;
}