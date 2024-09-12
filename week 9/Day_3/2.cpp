#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--){

        int a, b; cin >> a >> b;

        for(int i = 0; i < a; ++i) {
            for(int j = 0; j < b; ++j) {
                if(i % 2 == 0) cout << (a / 2 + i / 2) * b + j + 1 << ' ';
                else cout << (i / 2) * b + j + 1 << ' ';
            }
            cout << '\n';
        }
    }
}
