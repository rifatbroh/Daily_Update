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
    vector<string> v;
    for (int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    bool flag = false;
    for (int i=0; i<n; i++)
    {
        int cnt = 0;
        for (int j=0; j<n; j++)
        {
            if (v[i][j] == '1'){
                cnt++;
            }
        }
        if (cnt == 1)
            flag = true;
        else if (cnt > 1)
            break;
    }
    reverse(v.begin(), v.end());
    for (int i=0; i<n; i++)
    {
        int cnt =0;
        for (int j=0; j<n; j++)
        {
            if (v[i][j] == '1')
                cnt++;
        }
        if (cnt == 1)
            flag = true;
        else if (cnt > 1)
            break;
    }
    if (flag)
        cout << "TRIANGLE";
    else
        cout << "SQUARE";
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