#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    int l = 0, r = max(x, y) * n, mid;

    while (l + 1 < r)
    {
        mid = l + (r - l) / 2;
        int t = mid;

        if (t < min(x, y))
        {
            r = mid;
            break;
        }

        int cnt = 1;
        t -= min(x, y);
        cnt += t / x + t / y;

        if (cnt >= n)
            r = mid;
        else
            l = mid;
    }
    cout << r;
}
