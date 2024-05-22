
#include <bits/stdc++.h>
#define ll long long
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
        string str;
        cin >> str;
        int a = 0;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i - 1] != str[i])
            {
                a++;
            }
        }
        cout << (a / 2) << endl;
    }
    return 0;
}
