/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int cnt = 1; // Start with one group
    string prev, curr;
    cin >> prev;

    for (int i = 1; i < n; i++) {
        cin >> curr;
        if (curr != prev) {
            cnt++;
        }
        prev = curr;
    }

    cout << cnt << endl;
    return 0;
}
