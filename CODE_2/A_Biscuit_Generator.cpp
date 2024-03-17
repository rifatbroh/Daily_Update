#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a, b, t;
    cin >> a >> b >> t;
    int biscuite = 0;
    for (int i=1; i*a<= t + 0.5; i++)
    {
        biscuite = biscuite + b;
    }
    cout << biscuite << endl;
    return 0;
}