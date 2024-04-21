#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        long long ans = 0, minus = 0;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                minus++;
                a[i] = -a[i];
            }
            ans = ans+a[i];
        }
        sort(a.begin(), a.end());
        if (minus & 1)
            ans -= 2*a[0];
        cout << ans << endl;
    }
    return 0;
}