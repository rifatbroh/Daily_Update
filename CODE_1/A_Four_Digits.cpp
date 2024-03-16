#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin >> s;
    int len = 0;
    for (int i=0; s[i] != '\0'; i++)
    {
        len++;
    }
    if (len == 4)
    {
        cout << s << endl;
    }
    else if (len == 3)
    {
        cout << "0" << s << endl;
    }
    else if (len == 2)
    {
        cout << "00" <<s << endl;
    }
    else 
    {
        cout << "000" << s << endl;
    }
    return 0;
}