/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n%7 == 0 || n%4 == 0){
        cout << "YES" << endl;
        return 0;
    }
    
    bool flag = true;
    string s =  to_string(n);
    for (int i=0; i<s.size(); i++){
        if (s[i] != '4' && s[i] != '7'){
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}