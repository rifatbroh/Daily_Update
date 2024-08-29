/*
    MD Rifat 
    
    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1 ;
    //cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        int mid = (s.size() - 1) / 2;
 
        string a = " ", b = " ";
        while (0 < mid) {
            b = s.substr(mid);
            a = s.substr(0, b.size());
            if (a == b)
                break;
            mid--;
        }
 
        (a == b && a != " ") ? cout << "YES\n" << a : cout << "NO";
    }
    return 0;
}
