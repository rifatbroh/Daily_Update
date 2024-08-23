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
    /*let's play*/
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v;
    char ch = '1';
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            v.push_back(1);
        if (s[i] == '0' && ch == '1')
            v.push_back(0);
        ch = s[i];
    }
    int cnt_1 = 0, cnt_2 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
            cnt_2++;
        else
            cnt_1++;
    }
    if (cnt_1 >= cnt_2)
        cout << "No";
    else
        cout << "Yes";
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