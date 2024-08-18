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
        string s;
        cin >> s;

        int firstB = -1, lastB = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                if (firstB == -1) {
                    firstB = i;
                }
                lastB = i;
            }
        }

        // The minimum length segment that needs to be painted is from firstB to lastB
        int result = lastB - firstB + 1;
        cout << result << endl;
    }
    return 0;
}
