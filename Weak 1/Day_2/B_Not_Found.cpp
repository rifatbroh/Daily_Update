#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin >> s;
    int freq[26] = {0};
    for (int i=0; i< s.size(); i++)
    {
        int value = s[i] - 'a';
        freq[value]++;
    }
    for (int i=0; i<26; i++)
    {
        if (freq[i] == 0)
        {
            char ch = i+'a';
            cout << ch;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}