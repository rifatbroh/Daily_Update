#include <bits/stdc++.h>

using namespace std;

int countModes(const string& substring) {
    unordered_map<char, int> freq;
    int maxFreq = 0;
    for (char c : substring) {
        freq[c]++;
        maxFreq = max(maxFreq, freq[c]);
    }
    int modes = 0;
    for (auto& pair : freq) {
        if (pair.second == maxFreq) {
            modes++;
        }
    }
    return modes;
}

void sumOfModes(int T, vector<pair<int, string>>& testCases) {
    for (int t = 0; t < T; ++t) {
        int N = testCases[t].first;
        string S = testCases[t].second;
        int totalSum = 0;
        for (int L = 0; L < N; ++L) {
            for (int R = L; R < N; ++R) {
                totalSum += countModes(S.substr(L, R - L + 1));
            }
        }
        cout << totalSum << endl;
    }
}

int main() {
    int T;
    cin >> T;
    vector<pair<int, string>> testCases(T);
    for (int t = 0; t < T; ++t) {
        cin >> testCases[t].first >> testCases[t].second;
    }
    sumOfModes(T, testCases);
    return 0;
}