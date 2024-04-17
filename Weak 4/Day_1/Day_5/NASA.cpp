#include<bits/stdc++.h>
using namespace std;

// Function to check if a number is palindrome or not
bool isPalindrome(int num) {
    int rev = 0, temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == num;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int xor_result = a[i] ^ a[j];
                if (isPalindrome(xor_result)) {
                    cnt++;
                }
            }
        }
        cout << cnt*2 << endl;
    }
    return 0;
}
