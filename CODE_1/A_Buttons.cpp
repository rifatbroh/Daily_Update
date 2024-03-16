#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << a+b << endl;
    }
    else if (a > b)
    {
        int opt_1 = (a + (a-1));
        cout << opt_1 << endl;
    }
    else
    {
        int opt_2 = (b + (b-1));
        cout << opt_2 << endl;
    }
    return 0;
}