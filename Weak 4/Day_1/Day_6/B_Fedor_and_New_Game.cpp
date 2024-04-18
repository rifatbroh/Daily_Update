#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t=1;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        ll v[b + 1];
        for (int i = 0; i <= b; i++)cin >> v[i];
        
        int x = 0;
        for (int i = 0; i < b; i++)
        {
            int count = 0;
            for (int j = 0; j < a; j++)
            {
                if (((v[i] >> j) & 1) != ((v[b] >> j) & 1))
                    count++;
            }
            if (count <= c) {
                x++;
            }
        }
        cout << x << endl;
    }
    return 0;
}
