#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> ar(n);
        for (int i = 0; i < n; i++) cin >> ar[i];
        ll mn = 40;
        while (q--)
        {
            int x;
            cin >> x;
            if (x < mn)
            {
                mn = x;
                for (int i = 0; i < n; i++)
                {
                    if (ar[i] % (1 << x) == 0)
                        ar[i] += (1 << (x - 1));
                }
            }
        }
        for (int v : ar)
        {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}