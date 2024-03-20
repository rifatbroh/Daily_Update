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
        int b = 0;
        int c;
        for (int i=1; i<=n; i++)
        {
            cin >> c;
            if (c - i > b)
            {
                b = c - i;
            }
        }
        cout << b << endl;
    }
    return 0;
}