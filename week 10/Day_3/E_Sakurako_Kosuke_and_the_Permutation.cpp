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
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        
        // Sort the vector to ensure next_permutation works from the first lexicographical order
        sort(v.begin(), v.end());
        
        // Generate and print all permutations
        cout << "Permutations of the array:" << endl;
        do {
            for(int num : v) {
                cout << num << " ";
            }
            cout << endl;
        } while(next_permutation(v.begin(), v.end()));
        
        cout << endl; // Separate output for different test cases
    }
    return 0;
}
