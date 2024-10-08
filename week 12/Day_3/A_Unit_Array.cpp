/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        ll pos = 0, neg = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == -1) {
                neg++;
            } else {
                pos++;
            }
        }

        ll total = 0;
        if (pos >= neg) {
            cout << (neg % 2) << endl;
        } else {
            total = (neg - pos + 1) / 2;
            neg -= total;
            if (neg % 2 != 0) {
                total++;
            }
            cout << total << endl;
        }
    }
    return 0;
}
