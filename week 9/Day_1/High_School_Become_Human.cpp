#include<bits/stdc++.h>
using namespace std;

long long int x,y;
long double X,Y;
int main()
{
    cin>>x>>y;
    X=y*log(x);
    Y=x*log(y);

    if(X==Y){
        cout<<"=\n";
    }
    else if(X>Y){
        cout<<">\n";
    }
    else if(X<Y){
        cout<<"<\n";
    }

    return 0;
}
