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

        int fst = abs(a - 1);
        int snd = abs(b-c) + (c-1);
        if (fst < snd)
            cout << "1" << endl;
        else if (fst > snd)
            cout << "2" << endl;
        else 
            cout << "3" << endl;
    }
    return 0;
}