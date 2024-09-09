/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++) cin >> v[i];

        bool flag = false;
        for (int i = 1; i <= n; i++){
            if (i == v[v[i]]){
                flag = true;
            }
        }
        if (flag)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}