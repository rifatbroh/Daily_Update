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
        string s[n];
        map<string, bool> mp;
        for (int i=0; i<n; i++)
        {
            cin >> s[i];
            mp[s[i]] = true;
        }
        // working procedure
        for (int i=0; i<n; i++)
        {
            bool flag = false;
            string str = s[i];
            for (int j=1; j< str.size(); j++)
            {
                string first = str.substr(0, j);
                string second = str.substr(j, str.size()-1);
                if(mp[first] && mp[second])
                {
                    flag = true;
                }
            }
            cout << flag;
        }
        cout << endl;
    }
    return 0;
}