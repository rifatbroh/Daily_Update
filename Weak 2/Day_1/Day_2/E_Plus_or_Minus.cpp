#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int equ_1 = a + b;
        int equ_2 = a - b;

        if (equ_1 == c)
            cout << "+" << endl;
        else
            cout << "-" << endl;
    }
    return 0;
}