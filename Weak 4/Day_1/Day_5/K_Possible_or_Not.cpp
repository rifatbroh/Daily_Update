#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        // value store or initialize
        int ans = -1;
        for (int i=0; i<n; i++)
        {
            if ((a[i] & s) == s)
            {
                ans &= a[i];
            }
        }
        if (ans == s)
            cout << "YES" <<endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}