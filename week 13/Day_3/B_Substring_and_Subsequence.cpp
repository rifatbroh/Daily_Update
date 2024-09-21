#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int minimum_length(string a, string b) {
    int a_len = a.length();
    int b_len = b.length();
    
    // Longest common subsequence (LCS) dynamic programming table
    int dp[a_len + 1][b_len + 1];
    
    // Initialize the dp array
    for (int i = 0; i <= a_len; ++i)
        for (int j = 0; j <= b_len; ++j)
            dp[i][j] = 0;
    
    // Fill dp array
    for (int i = 1; i <= a_len; ++i) {
        for (int j = 1; j <= b_len; ++j) {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    
    // The minimum length of the resulting string is the sum of both lengths minus the LCS length
    return a_len + b_len - dp[a_len][b_len];
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << minimum_length(a, b) << endl;
    }
    
    return 0;
}
