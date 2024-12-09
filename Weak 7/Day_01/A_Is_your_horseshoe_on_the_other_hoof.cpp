/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> v = {a, b, c, d};
    sort(v.begin(), v.end()); 

    int cnt = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == v[i + 1]) {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
