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
#define yes cout << "Yes"
#define no cout << "No"
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

vector<int> sq;  // Declared globally to be accessible in both solve() and main()

void solve()
{
    /* Let's GO */
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Check if n is a perfect square
    auto x = find(sq.begin(), sq.end(), n);
    if (x == sq.end())
    {
        no;
        return;
    }

    int p = sqrt(n);

    // Check the middle section of the grid
    for (int i = p; i < n - p; i += p)
    {
        for (int j = 1; j < p - 1; j++)
        {
            if (s[i + j] != '0')
            {
                no;
                return;
            }
        }
    }
    yes;
}

int main()
{
    OLD_MAXTAN
    // Precompute perfect squares up to 1000000
    for (int i = 2; i * i <= 1000000; i++)
    {
        sq.push_back(i * i);
    }
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
