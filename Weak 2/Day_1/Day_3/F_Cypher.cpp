#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for (int j=0; j<n; j++)
        {
            int x;
            cin >> x;
            int move = 0;
            for (int i=0; i<x; i++)
            {
                char ch;
                cin >> ch;
                if (ch == 'D')
                {
                    move++;
                }
                else if (ch == 'U')
                {
                    move--;
                }
            }
            a[j] = (a[j] + move) % 10;
            if (a[j] >= 0)
            {
                cout << a[j] << " ";
            }
            else
            {
                cout << 10 + a[j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}