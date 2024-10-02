/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;

        ll cal = a+b+c;
        if (cal%2 == 0)
            if (a>b)
                cout << "First" <<endl;
            else
                cout << "Second" <<endl;
        else
            if (b>a)
                cout << "Second" <<endl;
            else
                cout << "First" <<endl;
    }
    return 0;
}