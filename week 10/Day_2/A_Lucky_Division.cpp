// /*
//     MD Rifat 
    
//     country Bangladesh
// */

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     if (n%7 == 0 || n%4 == 0){
//         cout << "YES" << endl;
//         return 0;
//     }
    
//     bool flag = true;
//     string s =  to_string(n);
//     for (int i=0; i<s.size(); i++){
//         if (s[i] != '4' && s[i] != '7'){
//             flag = false;
//             break;
//         }
//     }
//     if (flag)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
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
    int n;
    cin >> n;

    if (n % 47 == 0 || n % 74 == 0 || n % 744 == 0 || n % 474 == 0 || n % 4 == 0 || n % 7 == 0 || n % 77 == 0 || n % 44 == 0 || n % 444 == 0 || n % 777 == 0 || n % 447 == 0 || n % 477 == 0 || n % 747 == 0 || n % 774 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}