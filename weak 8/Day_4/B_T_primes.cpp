/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1000000;
vector<int> prime(N, 0);

void seive() 
{
    //vector<int> prime(N, 0);
    for (int i = 2; i * i <= N; i++) {
        if (prime[i] == 0) {
            for (int j = i * i; j <= N; j += i) {
                prime[j] = 1;
            }
        }
    }
}

bool t_prime(ll x) {
    if (x < 4) return false;
    ll root = sqrt(x);
    return root * root == x && prime[root] == 0;
}

int main()
{
    seive();

    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) {
        if (t_prime(v[i]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
