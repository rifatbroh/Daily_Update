#include<bits/stdc++.h>
using namespace std;

bool is_prime(long long num) {
    if (num < 2) return false;
    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        long long num = a[i];
        long long root = sqrt(num);
        if (root * root == num && is_prime(root))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
