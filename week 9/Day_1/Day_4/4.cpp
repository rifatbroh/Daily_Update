
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, k;
        cin >> a >> b >> k;
        ll val = 0;

        if (b < k)
        {
            cout << b - a << endl;
            continue;
        }

        while (true)
        {
            if (b % k == 0 && b / k >= a)
            {
                val++;
                b = b / k;
            }
            else if (b % k == 0)
            {
                val = val + (b - a);
                break;
            }
            else
            {
                val = val + (b % k);
                b = b - (b % k);
            }

            if (b < a)
            {
                val += (b - a);
                break;
            }
        }

        cout << val << endl;
    }
    return 0;
}
