#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans;
    bool found = false;
    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            found = true;
            ans = i;
            break;
        }
    }

    if (found)
        cout << ans << endl;
    else
        cout << -1 << endl;
    return 0;
}
