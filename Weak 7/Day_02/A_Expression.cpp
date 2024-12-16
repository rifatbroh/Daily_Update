/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int one = a+b*c;
    int two = a*(b+c);
    int three = a*b*c;
    int four = (a+b)*c;
    int five = a+b+c;

    vector<int> v;
    v.push_back(one);
    v.push_back(two);
    v.push_back(three);
    v.push_back(four);
    v.push_back(five);

    int val = 0;
    for (int i=0; i<v.size(); i++){
        val = max(val, v[i]);
    }
    cout << val << endl;
    return 0;
}