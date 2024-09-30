/*
    MD Rifat 
    
    country Bangladesh
*/

#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");

    if (input.is_open() && output.is_open()){
        char ch;
        while(input.get(ch)) {
            output << ch;
        }
    }
    else {
        cerr << "Bad Gateway- 404" << endl;
    }
    input.close();
    output.close();
    return 0;
}