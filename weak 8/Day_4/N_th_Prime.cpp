/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void seive(int N){
    vector<int> prime(N, 0);
    for (int i=2; i*i<=N; i++){
        if (prime[i] == 0){
            for (int j=i*i; j<N; j+=i){
                prime[j] = 1;
            }
        }
    }

    for (int i=2; i<N; i++){
        if (prime[i] == 0){
            v.push_back(i);
        }
    }
}
int main()
{
    int n;
    cin >> n;

    int N = 10000000;
    seive(N);

    cout << v[n-1] << endl;
    return 0;
}