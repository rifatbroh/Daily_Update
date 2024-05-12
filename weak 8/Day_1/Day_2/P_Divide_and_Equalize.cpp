#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> divs;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int x = a[i];
            int j = 2;
            while (j * j <= x)
            {
                while (x % j == 0)
                {
                    divs[j]++;
                    x /= j;
                }
                j++;
            }
            if (x > 1) divs[x]++;
        }
        bool possible = true;
        for (auto xx : divs) {
            if (xx.second % n != 0)
            {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << "\n";
    }
    return 0;
}
