#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n][n-1];
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n-1; j++)
            {
                cin >> a[i][j];
            }
        }
        unordered_map<int, int> mp;
        vector<int> ans;

        for (int i=0; i<n-1; i++)
        {

            pair <int, int> one = {0,0};
            pair <int, int> two;
            for (int j=0; j<n; j++)
            {
                mp[a[j][i]]++;
            }
            for(auto v: mp)
            {
                if (v.second > one.second)
                {
                    two = one;
                    one = v;
                }
                else
                {
                    two = v;
                }
            }
            ans.push_back(one.first);
            ans.push_back(two.first);
            mp.clear();
        }
        vector<bool> b(n+1, false);
        for (int v: ans)
        {
            if (b[v] == false)
            {
                cout << v << " ";
                b[v] = true;
            }
        }
        cout << endl;
    }
    return 0;
}