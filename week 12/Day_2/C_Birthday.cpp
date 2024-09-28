/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int a[105];
 
int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}	
	sort(a,a+n);
	for (int i = 0; i < n; i += 2)
    {
		cout << a[i] << " ";
	}
	if(n % 2) n-=2;
	else n--;
	for (int i = n; i > 0 ; i-=2)
    {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
} 