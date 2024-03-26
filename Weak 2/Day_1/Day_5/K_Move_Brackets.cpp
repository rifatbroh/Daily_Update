#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int moves = 0;
        for (int i=0; i<n; i++)
        {
            if (s[i] == ')' && moves)
                moves--;
            else if (s[i] == '(')
                moves++;
        }
        cout << moves << endl;
    }
    return 0;
}