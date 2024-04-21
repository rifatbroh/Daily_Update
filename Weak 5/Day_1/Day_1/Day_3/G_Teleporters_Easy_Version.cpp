#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, c;
        cin >> n >> c;
        vector<long long> v(n);
        long long sum = 0;

        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] = v[i] + i + 1;
        }

        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            if (sum > c)
            {
                cout << i << endl;
                break;
            }
        }
        if (sum <= c)
            cout << n << endl;
    }
    return 0;
}
