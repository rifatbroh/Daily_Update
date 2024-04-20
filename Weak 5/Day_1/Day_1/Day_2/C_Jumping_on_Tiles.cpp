#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        map<char, vector<int>> mp;
        for (int i=0; i<n; i++)
        {
            mp[s[i]].push_back(i);
        }
        int index;
        if (s[0] < s[n-1])
            index = 1;
        else
            index = -1;
        vector<int> ans;
        for (char c = s[0]; c != s[n-1]+index; c+=index)
        {
            for (auto j : mp[c])
            {
                ans.push_back(j);
            }
        }
        int cst = 0;
        for (int i=1; i<ans.size(); i++)
        {
            cst += abs(s[ans[i]] - s[ans[i - 1]]);
        }
        cout << cst << " " << ans.size() << endl;
        for (auto j: ans)
        {
            cout << j+1 <<" ";
        }
        cout << endl;    }
    return 0;
}