#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        if (n == 1)
            cout << "1" << endl;
        else if (n == 2)
            cout << "2 1" << endl;
        else if (n == 3) 
            cout << "-1" << endl;
        else {
            for (int i = n; i >= 1; i--)
                cout << i << " ";
            cout << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
