#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Function to find if there exist three distinct primes that satisfy the condition
bool findTriplePrimes(int N) {
    // Since 2 is the only even prime, and we need three distinct primes,
    // one of them must be 2 if N is not divisible by 3.
    if (N % 3 != 0 && isPrime(N - 4)) {
        return true;
    }
    // Check for all other combinations
    for (int i = 3; i * i < N; i += 2) {
        if (isPrime(i)) {
            for (int j = i + 2; j * j < N - i * i; j += 2) {
                if (isPrime(j) && isPrime(N - i * i - j * j)) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        cout << (findTriplePrimes(N) ? "YES" : "NO") << endl;
    }
    return 0;
}
