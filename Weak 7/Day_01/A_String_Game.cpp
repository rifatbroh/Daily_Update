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
        string s;
        cin >> s;
        int odd = 0, even = 0;
        for (int i=0; i<n; i++)
        {
            if (s[i] == '0')
                even++;
            else
                odd++;
        }
        int both_pair = min(odd, even);
        if (both_pair%2 == 0)
            cout << "Ramos" << endl;
        else
            cout << "Zlatan" << endl;
    }
    return 0;
}