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
        int Xor = 0;
        for (int i=0; i<n; i++)
        {
            int k;
            cin >> k;
            Xor ^= k;
        }
        if (Xor == 0)
        {
            cout << "0\n";
        }
        else if (n%2 == 0)
        {
            cout << "-1\n";
        }
        else
        {
            cout << Xor << '\n';
        }
    }
    return 0;
}
