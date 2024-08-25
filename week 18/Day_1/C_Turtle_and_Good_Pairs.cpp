#include <iostream>
#include <string>
using namespace std;

bool isPleasantPair(const string &s, int i, int j) {
    for (int k = i + 1; k < j; ++k) {
        if (s[k] != s[k + 1] && (s[k] != s[i] || s[k + 1] != s[j])) {
            return true;
        }
    }
    return false;
}

bool isGoodPair(const string &s, int i, int j) {
    if (s[i] == s[j]) return true;
    return isPleasantPair(s, i, j);
}

int main() {
    string s;
    cin >> s;
    int n = s.size();
    
    int goodPairCount = 0;
    
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (isGoodPair(s, i, j)) {
                ++goodPairCount;
            }
        }
    }
    
    cout << goodPairCount << endl;
    
    return 0;
}
