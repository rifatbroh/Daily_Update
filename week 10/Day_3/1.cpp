/*
    MD Rifat 

    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int n;
        long long d;
        cin >> n >> d;

        long long total = 0;
        for (int j = 0; j < n; j++) {
            int m, k;
            cin >> m >> k; 
            total += d / m;
        }
        
        cout << "Case " << i << ": " << total << "\n";
    }

    return 0;
}
