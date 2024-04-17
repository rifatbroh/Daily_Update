#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a = 0;
        while((1 << (a + 1)) <= n - 1)
        {
            a++;
        } 
        for(int i = (1 << a) - 1; i >= 0; i--)
        {
            cout << i << ' ';
        }
        for(int i = (1 << a); i < n; i++)
        {
            cout << i << ' ';
        }
        cout << '\n';
    }
}