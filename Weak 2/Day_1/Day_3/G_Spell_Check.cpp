#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string t = "Timur";
        string s;
        cin >> n >> s;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (n == 5)
        {
            if (s == t)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
