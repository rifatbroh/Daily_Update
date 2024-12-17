#include<stdio.h>
int main()
{
    int n,i,a,b,c,d;
    scanf("%d",&n);
    for(i=0; ;i++)
    {
        n++;
        a = n/1000;
        b= n/100 -a*10;
        c = n/10 - a*100 - b*10;
        d = n - a*1000 - b*100 - c*10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            printf("%d",n);
            return 0;
        }
    }
}
