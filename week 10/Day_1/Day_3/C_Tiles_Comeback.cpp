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

bool solve()
{
    /*Lets play*/
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    for(int i = 0; i < n; i++) cin >> c[i];
    int l = 0, r = 0, i = 0, j = n - 1;
    int left = k, right = k;

    if (c[0] == c[n - 1]) {
        left = k / 2;
        right = k - left;
    }
    for(; i < n && l < left; i++) {
        if(c[i] == c[0]) l++;
    }
    for(; j >= 0 && r < right; j--) {
        if(c[j] == c[n - 1]) r++;
    }
    return (i - 1) < (j + 1);
}

int main()
{
    OLD_MAXTAN
    int t;
    cin >> t;
    while(t--)
    {
        cout << (solve() ? "YES" : "NO") << "\n";
    }
    return 0;
}
