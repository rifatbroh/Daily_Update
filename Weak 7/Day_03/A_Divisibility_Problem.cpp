/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;

        int x = a%b;
        int y = b - x;

        cout << y % b << endl;
    }
    return 0;
}