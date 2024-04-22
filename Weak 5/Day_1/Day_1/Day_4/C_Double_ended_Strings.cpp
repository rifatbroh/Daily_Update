#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n =s1.size(), m = s2.size();
        int cnt = 0;
        for (int i = 1; i <= min(n, m); i++) {
            for (int j = 0; j + i <= n; j++) {
                for (int k = 0; k + i <= m; k++) {
                    if (s1.substr(j, i) == s2.substr(k, i)) {
                        cnt = max(cnt, i);
                    }
                }
            }
        }
        cout << s1.size() + s2.size() - 2 * cnt << "\n";
    }
    return 0;
}