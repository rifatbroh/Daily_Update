/*
    MD Rifat
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int len_s1 = s1.size(), len_s2 = s2.size();

    if (len_s1 != len_s2) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < len_s1; i++) {
        if (isVowel(s1[i]) != isVowel(s2[i])) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
