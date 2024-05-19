#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int xx;
        cin >> xx;
        a[i] = make_pair(xx, i + 1);
    }

    sort(a.begin(), a.end());

    for (int k = 0; k < n - 2; k++)
    {
        int target = x - a[k].first;
        int i = k + 1, j = n - 1;

        while (i < j)
        {
            int sum = a[i].first + a[j].first;
            if (sum == target)
            {
                cout << a[k].second << " " << a[i].second << " " << a[j].second << endl;
                return 0;
            }
            else if (sum < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
    }

    // If no triplet is found
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
