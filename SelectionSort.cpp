//This program is  written by Pranto Biswas
//ID: 21-45026-2
//Problem : Selection Sort

#include<iostream>
using namespace std;


int main()
{
    int n=5,i,j,cur,temp;
    int a[n]={4,1,3,2,5};

    for(i=0;i<n-1;i++)
 {
        cur=i;
    for(j=i+1;j<n;j++)
        if( a[cur]>a[j] )

                cur=j;
                temp=a[cur];
                a[cur]=a[i];
                a[i]=temp;


 }
 for(i=0;i<n;i++){

            cout<<a[i]<<" ";
 }
return 0;
}


