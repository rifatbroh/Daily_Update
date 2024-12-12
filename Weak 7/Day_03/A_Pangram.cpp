/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;

bool isPanagram(string s){
    set<char> ch;
    for (char c : s){
        if (isalpha(c)){
            ch.insert(tolower(c));
        }
    }
    return ch.size() == 26;
}
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (isPanagram(s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}