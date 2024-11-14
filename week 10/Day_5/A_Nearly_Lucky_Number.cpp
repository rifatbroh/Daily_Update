// /*
//     MD Rifat 
    
//     country Bangladesh
// */

// #include<bits/stdc++.h>
// using namespace std;
// bool isLucky(int num){
//     while(num > 0){
//         int digit = num % 10;
//         if (digit != 4 && digit != 7){
//             return false;
//         }
//         num /= 10;
//     }
//     return true;
// }
// int main()
// {
//     string s;
//     cin >> s;

//     // bool flag = false;
//     // for (int i=0; i<s.size(); i++){
//     //     if (s[i] == '4' || s[i] == '7'){
//     //         flag = true;
//     //         break;
//     //     }
//     // }
    
//     int cnt = 0;
//     for (char c : s){
//         if (c == '4' ||c == '7'){
//             cnt++;
//         }
//     }
//     if (isLucky(cnt)){
//         cout << "YES" << endl;
//     }
//     else{
//         cout << "NO" << endl;
//     }
//     return 0;
// }





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

    int cnt = 0;
    for (int i=0; i<s.size(); i++){
        if (s[i] == '4' || s[i] == '7'){
            cnt++;
        }
    }
    if (cnt == 4 || cnt == 7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}