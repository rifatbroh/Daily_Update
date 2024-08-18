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
        string s;
        cin >> s;
        bool found = false;

        // Try to split the string s into two parts
        for (int i = 1; i < s.size(); i++) {
            string a = s.substr(0, i);
            string b = s.substr(i);

            // Convert to integers
            int n = stoi(a);
            int m = stoi(b);

            // Check if the conditions are met
            if (m > n && a[0] != '0' && b[0] != '0') {
                cout << n << " " << m << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "-1" << endl;
        }
    }
    return 0;
}
