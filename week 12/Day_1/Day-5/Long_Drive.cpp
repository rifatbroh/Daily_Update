/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> pb;

    while(t--)
    {
        int a, b;
        cin >> a >> b;

        int x = 10 * (b - a);
        int y = 100 - b;
        int t = (x + y - 1) / y;
        pb.push_back(t);
    }

    for (int ans : pb) {
        cout << ans << endl;
    }

    return 0;
}
