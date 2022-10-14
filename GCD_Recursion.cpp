#include<bits/stdc++.h>
using namespace std;

int GCD(int n,int m)
{
    if(n==m)
        return m;

    else if(n>=m)
            return GCD(n-m,m);

    else
        return GCD(n,m-n);
}

int main()
{
    int n=12;
    int m=4;

    cout<<"GCD Is "<<GCD(n,m);
    return 0;
}
