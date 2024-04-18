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
        vector<int>a(n);
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int op = a[0];
        for (int i=1; i<n; i++)
        {
            op = op&a[i];
        }
        cout << op << endl;
    }
    return 0;
}