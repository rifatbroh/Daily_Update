#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;
    int pairs = 0;

    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();
            pairs++;
        } else {
            st.push(c);
        }
    }

    if (pairs % 2 == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
