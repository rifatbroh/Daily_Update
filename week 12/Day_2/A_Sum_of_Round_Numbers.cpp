/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = 1;
        vector<int> v;
        while (n) {
            if (n % 10)
                v.push_back((n % 10) * cnt);
            n /= 10;
            cnt *= 10;
        }
        cout << v.size() << endl;
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
