#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    string t;
    cin >> s >> t;
    int cnt = 0;

    for (int i=0; s[i] != '\0'; i++)
    {
        if (s[i] != t[i])
        {
            cnt++;
        }
    }
    cout << cnt <<endl;
    return 0;
}