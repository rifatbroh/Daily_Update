#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            long x;
            cin >> x;
            if ((x <= n) && (!s.count(x)))
                s.insert(x);
            else
                v.push_back(x);
        }

        sort(v.begin(), v.end());

        long cnt = v.size();
        long idx = 0;
        for (int j = 1; j <= n; j++) {
            if (s.count(j)) {
                continue;
            }
            if (v[idx] <= 2 * j) {
                cnt = -1;
                break;
            }
            idx++;
        }

        cout << cnt << endl;
    }
    return 0;
}
