/*
    MD Rifat Hossain

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;
#define OLD_MAXTAN                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define ll long long
#define ld long double
#define yes "YES"
#define no "no"
#define PI 3.1415926535897932384626433832795

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

const int maxn = 200000;
int n, k, q;
int A[maxn + 233]; 
int in1, in2; 

void solve() {
    int in1, in2;
    cin >> in1 >> in2;
    cout << A[in2] - A[in1 - 1] << '\n';
}

int main() {
    OLD_MAXTAN
    memset(A, 0, sizeof(A)); 
    cin >> n >> k >> q;
    
    for (int i = 0; i < n; ++i) {
        cin >> in1 >> in2;
        A[in1]++;
        A[in2 + 1]--;
    }
    for (int i = 1; i <= maxn; i++) {
        A[i] += A[i - 1];
    }
    for (int i = 1; i <= maxn; i++) {
        A[i] = A[i - 1] + (A[i] >= k ? 1 : 0);
    }
    int t = q;
    while (t--) {
        solve();
    }
    
    return 0;
}
