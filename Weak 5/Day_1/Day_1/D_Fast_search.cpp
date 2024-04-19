#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n); 
 
    int q; 
    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;
 
        int x = upper_bound(a, a + n, r)-a;
        int y = lower_bound(a, a + n, l)-a;
        int cnt = x - y;
        cout << cnt << " ";
    }
    cout << endl;
    
    return 0;
}