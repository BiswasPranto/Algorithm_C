#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    srand(time(0));
    freopen("Prano.txt","w",stdout);
    for(int i=0;i<n;i++)
        {
            int a = rand();
            cout<<a%100+1<<" "<<endl;

        }
}
