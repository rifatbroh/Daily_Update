/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    string res;
    for (int i=0; i<s.size(); i++){
        if (s.substr(i, 3) == "WUB")
            i +=3;
        else{
            res += s[i];
            i++;
        }
    }
    cout << res << endl;
    return 0;
}