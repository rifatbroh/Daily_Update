/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> mp;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        if (mp.size() == 1)
        {
            cout << "Yes" << endl;
            continue;
        }
        if (mp.size() > 2)
        {
            cout << "No" << endl;
            continue;
        }
        else
        {
            auto it = mp.begin();
            int a = it->second;
            it++;
            int b = it->second;
            if (a == b || abs(a - b) == 1)
            {
                cout << "Yes" << endl;
                continue;
            }
            else
            {
                cout << "No" << endl;
                continue;
            }
        }
    }
      
    return 0;
}