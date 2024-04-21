#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, l, r, k;
    cin >> n >> l >> r >> k;
    int cnt = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < (1 << n); i++) {
        int sum = 0, minn = INT_MAX, maxx = INT_MIN;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum += a[j];
                minn = min(minn, a[j]);
                maxx = max(maxx, a[j]);
            }
        }
        int diff = maxx - minn;
        if (sum >= l && sum <= r && diff >= k)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
