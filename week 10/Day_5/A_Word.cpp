/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int u = 0, l = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i])) {
            u++;
        } else {
            l++;
        }
    }

    for (int i = 0; i < s.size(); i++) {
        if (u > l) {
            cout << (char)toupper(s[i]);
        } else {
            cout << (char)tolower(s[i]);
        }
    }
    cout << endl;

    return 0;
}
