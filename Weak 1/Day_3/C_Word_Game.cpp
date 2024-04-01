#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string arr[3][n];
        map<string, int> mp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                arr[i][j] = s;
                mp[s]++;
            }
        }
        int freq[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp[arr[i][j]] == 1)
                {
                    freq[i] += 3;
                }
                else if (mp[arr[i][j]] == 2)
                {
                    freq[i] += 1;
                }
            }
        }

        for (int i = 0; i < 3; ++i)
        {
            cout << freq[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
